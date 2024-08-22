// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDISPLAYINFOPROVIDER_H
#define _UIDISPLAYINFOPROVIDER_H

@class NSString, FBSDisplayConfiguration;
@protocol _UIDisplayInfoProviding, _UIDisplayInfoShape;

#import <Foundation/Foundation.h>


@interface _UIDisplayInfoProvider : NSObject <_UIDisplayInfoProviding>



@property (readonly, nonatomic) NSUInteger artworkSubtype; // ivar: artworkSubtype
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration; // ivar: displayConfiguration
@property (readonly, nonatomic) NSObject<_UIDisplayInfoShape> *exclusionArea; // ivar: exclusionArea
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat homeAffordanceOverlayAllowance; // ivar: homeAffordanceOverlayAllowance
@property (readonly, nonatomic) UIEdgeInsets peripheryInsets; // ivar: peripheryInsets
@property (readonly, nonatomic) UIEdgeInsets safeAreaInsetsLandscapeLeft; // ivar: safeAreaInsetsLandscapeLeft
@property (readonly, nonatomic) UIEdgeInsets safeAreaInsetsLandscapeRight; // ivar: safeAreaInsetsLandscapeRight
@property (readonly, nonatomic) UIEdgeInsets safeAreaInsetsPortrait; // ivar: safeAreaInsetsPortrait
@property (readonly, nonatomic) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; // ivar: safeAreaInsetsPortraitUpsideDown
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat systemMinimumMargin; // ivar: systemMinimumMargin




@end


#endif