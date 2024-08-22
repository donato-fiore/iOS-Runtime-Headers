// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXIDENTITYZOOMANIMATIONCONTEXT_H
#define _PXIDENTITYZOOMANIMATIONCONTEXT_H

@class NSString;
@protocol PXZoomAnimationContext;

#import <Foundation/Foundation.h>

#import "PXRegionOfInterest.h"
#import "PXNonuniformTransform.h"

@interface _PXIdentityZoomAnimationContext : NSObject <PXZoomAnimationContext>



@property (readonly, nonatomic) CGFloat animationDuration;
@property (readonly, nonatomic) NSInteger animationType;
@property (readonly, nonatomic) NSObject<PXZoomAnimationContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat fromAlpha; // ivar: _fromAlpha
@property (readonly, nonatomic) PXRegionOfInterest *fromRegionOfInterest;
@property (readonly, nonatomic) PXNonuniformTransform *fromTransform; // ivar: _fromTransform
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (readonly, nonatomic, getter=isMatchingRegionsOfInterest) BOOL matchingRegionsOfInterest;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat toAlpha; // ivar: _toAlpha
@property (readonly, nonatomic) PXRegionOfInterest *toRegionOfInterest;
@property (readonly, nonatomic) PXNonuniformTransform *toTransform; // ivar: _toTransform


-(NSInteger)willBeginAnimation;
-(id)initWithContext:(id)arg0 ;
-(void)didEndAnimation:(NSInteger)arg0 ;
-(void)registerCleanupHandler:(id)arg0 ;


@end


#endif