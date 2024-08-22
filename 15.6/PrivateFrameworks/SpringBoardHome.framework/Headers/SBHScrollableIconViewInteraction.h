// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHSCROLLABLEICONVIEWINTERACTION_H
#define SBHSCROLLABLEICONVIEWINTERACTION_H

@protocol SBHScrollableIconViewContaining;

#import <Foundation/Foundation.h>

#import "SBIconView.h"

@interface SBHScrollableIconViewInteraction : NSObject {
    SBIconView *_cachedInteractingIconView;
}


@property (readonly, weak, nonatomic) NSObject<SBHScrollableIconViewContaining> *container; // ivar: _container


-(BOOL)isIconViewTheInteractingTargetIconView:(id)arg0 ;
-(CGFloat)_clippingFudgeInset;
-(id)_findInteractingIconView;
-(id)initWithContainer:(id)arg0 ;
-(void)clippingScrollViewDidScroll:(id)arg0 ;
-(void)handleTargetIconViewClipped:(id)arg0 ;
-(void)updateScrolling:(BOOL)arg0 ;


@end


#endif