// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUISACTIVITYUPDATEPROVIDER_H
#define ACUISACTIVITYUPDATEPROVIDER_H

@class NSString;
@protocol ACUISActivityUpdateProviding, _TtP18ActivityUIServices23ActivityUpdateProviding_;

#import <Foundation/Foundation.h>

#import "ACUISActivityHostViewController.h"
#import "ACUISSystemApertureSceneHandle.h"
#import "ACUISActivityPresentationOptions.h"

@interface ACUISActivityUpdateProvider : NSObject <ACUISActivityUpdateProviding>

 {
    id<_TtP18ActivityUIServices23ActivityUpdateProviding_> *_updateProviding;
    ACUISActivityHostViewController *_platterHostViewController;
    ACUISSystemApertureSceneHandle *_systemApertureSceneHandle;
}


@property (readonly, copy, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ACUISActivityHostViewController *platterHostViewController;
@property (readonly, nonatomic) ACUISActivityPresentationOptions *presentationOptions; // ivar: _presentationOptions
@property (readonly, copy, nonatomic) NSString *sceneOwnerBundleIdentifier; // ivar: _sceneOwnerBundleIdentifier
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) ACUISSystemApertureSceneHandle *systemApertureSceneHandle;


-(NSInteger)_activityState:(NSInteger)arg0 ;
-(id)initWithActivityUpdateProviding:(id)arg0 ;


@end


#endif