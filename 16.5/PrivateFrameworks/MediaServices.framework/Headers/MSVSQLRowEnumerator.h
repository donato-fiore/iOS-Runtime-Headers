// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVSQLROWENUMERATOR_H
#define MSVSQLROWENUMERATOR_H

@class NSEnumerator, NSString;
@protocol NSObject;


#import "MSVSQLStatement.h"

@interface MSVSQLRowEnumerator : NSEnumerator <NSObject>

 {
    MSVSQLStatement *_statement;
}


@property (readonly, nonatomic) NSInteger columnCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)boolValueAtColumnIndex:(NSInteger)arg0 ;
-(BOOL)isNullValueAtColumnIndex:(NSInteger)arg0 ;
-(CGFloat)doubleValueAtColumnIndex:(NSInteger)arg0 ;
-(NSInteger)int64ValueAtColumnIndex:(NSInteger)arg0 ;
-(NSUInteger)uint64ValueAtColumnIndex:(NSInteger)arg0 ;
-(float)floatValueAtColumnIndex:(NSInteger)arg0 ;
-(id)_markdownTable;
-(id)columnNameAtIndex:(NSInteger)arg0 ;
-(id)dataValueAtColumnIndex:(NSInteger)arg0 ;
-(id)dateValueAtColumnIndex:(NSInteger)arg0 ;
-(id)jsonDataAtColumnIndex:(NSInteger)arg0 ;
-(id)jsonValueAtColumnIndex:(NSInteger)arg0 error:(*id)arg1 ;
-(id)markdownTable;
-(id)markdownTableHeader;
-(id)markdownTableRow;
-(id)nextObject;
-(id)nextObjectWithError:(*id)arg0 ;
-(id)objectValueAtColumnIndex:(NSInteger)arg0 ;
-(id)stringValueAtColumnIndex:(NSInteger)arg0 ;
-(void)_addRow:(id)arg0 toTable:(id)arg1 ;


@end


#endif