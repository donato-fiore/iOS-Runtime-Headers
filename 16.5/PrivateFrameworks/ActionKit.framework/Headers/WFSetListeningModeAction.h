// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSETLISTENINGMODEACTION_H
#define WFSETLISTENINGMODEACTION_H

@class WFAction;



@interface WFSetListeningModeAction : WFAction



-(id)errorFromRoutePickerError:(id)arg0 ;
-(id)errorUserInfoForRoutePickerErrorCode:(NSInteger)arg0 ;
-(id)routeDescriptor;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif