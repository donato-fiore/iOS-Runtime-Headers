// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18ACTIVITYUISERVICES33ACTIVITYSYSTEMAPERTURESCENEHANDLE_H
#define _TTC18ACTIVITYUISERVICES33ACTIVITYSYSTEMAPERTURESCENEHANDLE_H

@class ACActivityDescriptor, FBScene;
@protocol BSInvalidatable, _TtP18ActivityUIServices41ActivitySystemApertureSceneHandleDelegate_;

#import <Foundation/Foundation.h>


@interface _TtC18ActivityUIServices33ActivitySystemApertureSceneHandle : NSObject <BSInvalidatable>

 {
    ? invalidated;
    ? activityDescriptor;
    ? systemMetricsRequest;
    ? processResource;
    ? logIdentifier;
    ? currentContentPayloadID;
    ? backOffTimer;
    ? settingsDiffInspector;
}


@property (nonatomic, weak) NSObject<_TtP18ActivityUIServices41ActivitySystemApertureSceneHandleDelegate_> *delegate; // ivar: delegate
@property (nonatomic, retain) ACActivityDescriptor *descriptor; // ivar: descriptor
@property (nonatomic, retain) FBScene *scene; // ivar: scene


-(id)init;
-(id)initWithIdentifier:(id)arg0 systemMetricsRequest:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif