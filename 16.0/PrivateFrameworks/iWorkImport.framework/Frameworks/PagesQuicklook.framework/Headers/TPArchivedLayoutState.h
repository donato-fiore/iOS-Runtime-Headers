// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPARCHIVEDLAYOUTSTATE_H
#define TPARCHIVEDLAYOUTSTATE_H

@class TSPObject;


#import "TPLayoutState.h"

@interface TPArchivedLayoutState : TSPObject

@property (copy, nonatomic) TPLayoutState *layoutState; // ivar: _layoutState


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToArchivedLayoutState:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithContext:(id)arg0 layoutState:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif