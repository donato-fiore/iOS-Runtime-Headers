// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDATATABLEDICTIONARY_H
#define SXDATATABLEDICTIONARY_H

@class NSMutableIndexSet, NSMutableArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface SXDataTableDictionary : NSObject <NSFastEnumeration>



@property (retain, nonatomic) NSMutableIndexSet *indexes; // ivar: _indexes
@property (readonly, nonatomic) NSUInteger numberOfColumns; // ivar: _numberOfColumns
@property (readonly, nonatomic) NSUInteger numberOfRows; // ivar: _numberOfRows
@property (retain, nonatomic) NSMutableArray *storage; // ivar: _storage


+(id)dataTableDictionaryWithRows:(NSUInteger)arg0 andColumns:(NSUInteger)arg1 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexForIndexPath:(struct ? )arg0 ;
-(id)arrayWithObject:(id)arg0 forCount:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithRows:(NSUInteger)arg0 andColumns:(NSUInteger)arg1 ;
-(id)objectForIndexPath:(struct ? )arg0 ;
-(struct ? )indexPathForIndex:(NSUInteger)arg0 ;
-(struct ? )indexPathOfObject:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForIndexPath:(struct ? )arg0 ;
-(void)setObject:(id)arg0 forIndexPath:(struct ? )arg1 ;


@end


#endif