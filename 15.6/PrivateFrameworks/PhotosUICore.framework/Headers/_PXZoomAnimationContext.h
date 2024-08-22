// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXZOOMANIMATIONCONTEXT_H
#define _PXZOOMANIMATIONCONTEXT_H

@class NSMutableArray, NSString;
@protocol PXZoomAnimationContext, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "PXRegionOfInterest.h"
#import "PXNonuniformTransform.h"

@interface _PXZoomAnimationContext : NSObject <PXZoomAnimationContext>

 {
    NSObject<OS_dispatch_group> *_animationGroup;
    NSMutableArray *_cleanupHandlers;
}


@property (copy, nonatomic, setter=_setAllAnimationsCompletionHandler:) id *_allAnimationsCompletionHandler; // ivar: __allAnimationsCompletionHandler
@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (nonatomic) NSInteger animationType; // ivar: _animationType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat fromAlpha; // ivar: _fromAlpha
@property (retain, nonatomic) PXRegionOfInterest *fromRegionOfInterest; // ivar: _fromRegionOfInterest
@property (retain, nonatomic) PXNonuniformTransform *fromTransform; // ivar: _fromTransform
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL keepsSourceRegionOfInterestContent; // ivar: _keepsSourceRegionOfInterestContent
@property (nonatomic, getter=isMatchingRegionsOfInterest) BOOL matchingRegionsOfInterest; // ivar: _matchingRegionsOfInterest
@property (readonly) Class superclass;
@property (nonatomic) CGFloat toAlpha; // ivar: _toAlpha
@property (retain, nonatomic) PXRegionOfInterest *toRegionOfInterest; // ivar: _toRegionOfInterest
@property (retain, nonatomic) PXNonuniformTransform *toTransform; // ivar: _toTransform


-(NSInteger)willBeginAnimation;
-(id)init;
-(void)cleanup;
-(void)didEndAnimation:(NSInteger)arg0 ;
-(void)notifyWhenAllAnimationsCompleted:(id)arg0 ;
-(void)registerCleanupHandler:(id)arg0 ;


@end


#endif