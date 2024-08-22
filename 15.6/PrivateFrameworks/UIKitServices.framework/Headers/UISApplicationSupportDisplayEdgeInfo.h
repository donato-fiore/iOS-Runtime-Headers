// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISAPPLICATIONSUPPORTDISPLAYEDGEINFO_H
#define UISAPPLICATIONSUPPORTDISPLAYEDGEINFO_H

@class NSString, NSNumber;
@protocol BSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "UISApplicationSupportDisplayEdgeInsetsWrapper.h"

@interface UISApplicationSupportDisplayEdgeInfo : NSObject <BSXPCCoding, NSCopying>

 {
    ? _infoFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *homeAffordanceOverlayAllowance; // ivar: _homeAffordanceOverlayAllowance
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *peripheryInsets; // ivar: _peripheryInsets
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsLandscapeLeft; // ivar: _safeAreaInsetsLandscapeLeft
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsLandscapeRight; // ivar: _safeAreaInsetsLandscapeRight
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsPortrait; // ivar: _safeAreaInsetsPortrait
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsPortraitUpsideDown; // ivar: _safeAreaInsetsPortraitUpsideDown
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *systemMinimumMargin; // ivar: _systemMinimumMargin


+(id)defaultDisplayEdgeInfo;
+(id)defaultDisplayEdgeInfoForceInsets:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)_copyFromOtherInfo:(id)arg0 ;
-(void)_performIvarUpdateIfAllowed:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif