// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18ACTIVITYUISERVICES22ACTIVITYUPDATEPROVIDER_H
#define _TTC18ACTIVITYUISERVICES22ACTIVITYUPDATEPROVIDER_H

@class ACActivityDescriptor, NSString;
@protocol _TtP18ActivityUIServices23ActivityUpdateProviding_;

#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices26ActivityHostViewController.h"
#import "_TtC18ActivityUIServices19PresentationOptions.h"
#import "_TtC18ActivityUIServices33ActivitySystemApertureSceneHandle.h"

@interface _TtC18ActivityUIServices22ActivityUpdateProvider : NSObject <_TtP18ActivityUIServices23ActivityUpdateProviding_>

 {
    ? activityIdentifier;
    ? activityDescriptor;
    ? isUserDismissalAllowedOnLockScreen;
    ? activityTintColor;
}


@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityHostViewController *activityHostViewController; // ivar: activityHostViewController
@property (nonatomic) NSInteger activityState; // ivar: activityState
@property (nonatomic, retain) ACActivityDescriptor *descriptor; // ivar: descriptor
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _TtC18ActivityUIServices19PresentationOptions *presentationOptions;
@property (nonatomic, retain) _TtC18ActivityUIServices33ActivitySystemApertureSceneHandle *systemApertureScene; // ivar: systemApertureScene


-(id)init;
-(id)initWithActivityDescriptor:(id)arg0 activityState:(NSInteger)arg1 systemMetricsRequest:(id)arg2 ;


@end


#endif