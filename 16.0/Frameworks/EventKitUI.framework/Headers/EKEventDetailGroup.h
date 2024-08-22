// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTDETAILGROUP_H
#define EKEVENTDETAILGROUP_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface EKEventDetailGroup : NSObject

@property (retain, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) NSInteger tag; // ivar: _tag


-(BOOL)hasSubitemForIndexPathRow:(NSUInteger)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 forceUpdate:(BOOL)arg2 ;
-(NSUInteger)numberOfRows;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 withTraitCollection:(id)arg1 ;
-(id)description;
-(id)initWithTag:(NSInteger)arg0 headerTitle:(id)arg1 ;
-(id)itemAtIndex:(NSUInteger)arg0 ;
-(id)itemAtIndex:(NSUInteger)arg0 subitemIndex:(*NSUInteger)arg1 ;
-(void)updateCellLayoutsForRowCountIfNeededUsingWidth:(CGFloat)arg0 ;


@end


#endif