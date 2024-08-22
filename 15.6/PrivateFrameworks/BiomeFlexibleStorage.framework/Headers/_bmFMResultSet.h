// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BMFMRESULTSET_H
#define _BMFMRESULTSET_H

@class NSMutableDictionary, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "_bmFMDatabase.h"
#import "_bmFMStatement.h"

@interface _bmFMResultSet : NSObject {
    NSMutableDictionary *_columnNameToIndexMap;
}


@property (readonly, nonatomic) int columnCount;
@property (readonly) NSMutableDictionary *columnNameToIndexMap;
@property (retain, nonatomic) _bmFMDatabase *parentDB; // ivar: _parentDB
@property (retain) NSString *query; // ivar: _query
@property (readonly, nonatomic) NSDictionary *resultDictionary;
@property (nonatomic) BOOL shouldAutoClose; // ivar: _shouldAutoClose
@property (retain) _bmFMStatement *statement; // ivar: _statement


+(id)resultSetWithStatement:(id)arg0 usingParentDatabase:(id)arg1 shouldAutoClose:(BOOL)arg2 ;
-(BOOL)bindWithArray:(id)arg0 ;
-(BOOL)bindWithArray:(id)arg0 orDictionary:(id)arg1 orVAList:(char *)arg2 ;
-(BOOL)bindWithDictionary:(id)arg0 ;
-(BOOL)boolForColumn:(id)arg0 ;
-(BOOL)boolForColumnIndex:(int)arg0 ;
-(BOOL)columnIndexIsNull:(int)arg0 ;
-(BOOL)columnIsNull:(id)arg0 ;
-(BOOL)hasAnotherRow;
-(BOOL)next;
-(BOOL)nextWithError:(*id)arg0 ;
-(BOOL)step;
-(BOOL)stepWithError:(*id)arg0 ;
-(CGFloat)doubleForColumn:(id)arg0 ;
-(CGFloat)doubleForColumnIndex:(int)arg0 ;
-(NSInteger)longForColumn:(id)arg0 ;
-(NSInteger)longForColumnIndex:(int)arg0 ;
-(NSInteger)longLongIntForColumn:(id)arg0 ;
-(NSInteger)longLongIntForColumnIndex:(int)arg0 ;
-(NSUInteger)unsignedLongLongIntForColumn:(id)arg0 ;
-(NSUInteger)unsignedLongLongIntForColumnIndex:(int)arg0 ;
-(char *)UTF8StringForColumn:(id)arg0 ;
-(char *)UTF8StringForColumnIndex:(int)arg0 ;
-(char *)UTF8StringForColumnName:(id)arg0 ;
-(id)columnNameForIndex:(int)arg0 ;
-(id)dataForColumn:(id)arg0 ;
-(id)dataForColumnIndex:(int)arg0 ;
-(id)dataNoCopyForColumn:(id)arg0 ;
-(id)dataNoCopyForColumnIndex:(int)arg0 ;
-(id)dateForColumn:(id)arg0 ;
-(id)dateForColumnIndex:(int)arg0 ;
-(id)objectAtIndexedSubscript:(int)arg0 ;
-(id)objectForColumn:(id)arg0 ;
-(id)objectForColumnIndex:(int)arg0 ;
-(id)objectForColumnName:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)resultDict;
-(id)stringForColumn:(id)arg0 ;
-(id)stringForColumnIndex:(int)arg0 ;
-(int)columnIndexForName:(id)arg0 ;
-(int)intForColumn:(id)arg0 ;
-(int)intForColumnIndex:(int)arg0 ;
-(int)internalStepWithError:(*id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)kvcMagic:(id)arg0 ;


@end


#endif