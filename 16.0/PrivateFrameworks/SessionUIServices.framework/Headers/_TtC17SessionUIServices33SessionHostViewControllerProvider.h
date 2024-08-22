// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17SESSIONUISERVICES33SESSIONHOSTVIEWCONTROLLERPROVIDER_H
#define _TTC17SESSIONUISERVICES33SESSIONHOSTVIEWCONTROLLERPROVIDER_H

@class NSData, NSString, BSColor, NSArray;
@protocol _TtP17SessionUIServices34SessionHostViewControllerProviding_;

#import <Foundation/Foundation.h>

#import "_TtC17SessionUIServices32SessionPlatterHostViewController.h"
#import "_TtC17SessionUIServices32SessionSystemApertureSceneHandle.h"

@interface _TtC17SessionUIServices33SessionHostViewControllerProvider : NSObject <_TtP17SessionUIServices34SessionHostViewControllerProviding_>

 {
    ? sessionIdentifier;
    ? sessionDescriptor;
    ? sessionTintColor;
}


@property (nonatomic, readonly) NSData *descriptorData;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BOOL isUserDismissalAllowedOnLockScreen; // ivar: isUserDismissalAllowedOnLockScreen
@property (nonatomic, readonly) BSColor *platterTintColor;
@property (nonatomic, readonly) NSArray *sessionHostTouchRestrictedRects;
@property (nonatomic, retain) _TtC17SessionUIServices32SessionPlatterHostViewController *sessionPlatterHostViewController; // ivar: sessionPlatterHostViewController
@property (nonatomic) NSInteger sessionState; // ivar: sessionState
@property (nonatomic, retain) _TtC17SessionUIServices32SessionSystemApertureSceneHandle *sessionSystemApertureScene; // ivar: sessionSystemApertureScene


-(id)init;
-(id)initWithSessionDescriptor:(id)arg0 sessionState:(NSInteger)arg1 systemMetricsRequest:(id)arg2 ;
-(void)dealloc;


@end


#endif