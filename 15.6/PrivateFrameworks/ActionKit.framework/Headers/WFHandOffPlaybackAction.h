// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFHANDOFFPLAYBACKACTION_H
#define WFHANDOFFPLAYBACKACTION_H

@class WFAction;



@interface WFHandOffPlaybackAction : WFAction



-(id)destinationRouteDescriptor;
-(id)errorFromRoutePickerError:(id)arg0 ;
-(id)errorUserInfoForRoutePickerErrorCode:(NSInteger)arg0 involvedRouteName:(id)arg1 ;
-(id)invokingHomePodRouteDescriptor;
-(id)localEndpoint;
-(id)sourceRouteDescriptor;
-(void)askForUserSpecificationOfMissingRouteWithRoutePicker:(id)arg0 completionBlock:(id)arg1 ;
-(void)findInvokingHomePodEndpointWithRoutePicker:(id)arg0 completionBlock:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runWhenInvokedThroughHomePodWithSpecifiedDescriptor:(id)arg0 picker:(id)arg1 ;
-(void)runWhenInvokedThroughLocalDeviceWithSpecifiedDescriptor:(id)arg0 picker:(id)arg1 ;
-(void)runWithSourceRouteUID:(id)arg0 destinationRouteUID:(id)arg1 routePicker:(id)arg2 ;


@end


#endif