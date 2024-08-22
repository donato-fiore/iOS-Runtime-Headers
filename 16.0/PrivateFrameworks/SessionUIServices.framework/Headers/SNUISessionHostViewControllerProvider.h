// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNUISESSIONHOSTVIEWCONTROLLERPROVIDER_H
#define SNUISESSIONHOSTVIEWCONTROLLERPROVIDER_H

@class NSString, NSArray, BSColor;
@protocol SNUISessionHostViewControllerProviding;

#import <Foundation/Foundation.h>

#import "SNUISessionHostViewController.h"
#import "SNUISessionSystemApertureSceneHandle.h"

@interface SNUISessionHostViewControllerProvider : NSObject <SNUISessionHostViewControllerProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *hostIgnoredTouchedRects;
@property (readonly, nonatomic) BOOL isUserDismissalAllowedOnLockScreen; // ivar: _isUserDismissalAllowedOnLockScreen
@property (readonly, nonatomic) SNUISessionHostViewController *platterHostViewController; // ivar: _platterHostViewController
@property (readonly, nonatomic) BSColor *platterTintColor; // ivar: _platterTintColor
@property (readonly, copy, nonatomic) NSString *sceneOwnerBundleIdentifier; // ivar: _sceneOwnerBundleIdentifier
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) SNUISessionSystemApertureSceneHandle *systemApertureSceneHandle; // ivar: _systemApertureSceneHandle


-(NSInteger)_sessionState:(NSInteger)arg0 ;
-(id)initWithSessionHostViewControllerProviding:(id)arg0 ;


@end


#endif