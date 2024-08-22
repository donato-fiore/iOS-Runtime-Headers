// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUISSYSTEMAPERTURESCENEHANDLE_H
#define ACUISSYSTEMAPERTURESCENEHANDLE_H

@class NSString, ACActivityDescriptor, FBScene;
@protocol _TtP18ActivityUIServices41ActivitySystemApertureSceneHandleDelegate_, BSInvalidatable, ACUISSystemApertureSceneHandleDelegate;

#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices33ActivitySystemApertureSceneHandle.h"

@interface ACUISSystemApertureSceneHandle : NSObject <_TtP18ActivityUIServices41ActivitySystemApertureSceneHandleDelegate_, BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACUISSystemApertureSceneHandleDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ACActivityDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) _TtC18ActivityUIServices33ActivitySystemApertureSceneHandle *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly) Class superclass;


-(id)initWithActivitySystemApertureSceneHandle:(id)arg0 ;
-(id)initWithDescriptor:(id)arg0 metricsRequest:(id)arg1 ;
-(void)activitySystemApertureWithSceneHandle:(id)arg0 requestsLaunchWithAction:(id)arg1 ;
-(void)activitySystemApertureWithSceneHandle:(id)arg0 updatedContentPayloadID:(id)arg1 ;
-(void)invalidate;


@end


#endif