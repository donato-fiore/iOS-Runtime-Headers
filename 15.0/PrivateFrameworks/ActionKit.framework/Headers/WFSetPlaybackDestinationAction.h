// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSETPLAYBACKDESTINATIONACTION_H
#define WFSETPLAYBACKDESTINATIONACTION_H

@class WFAction;



@interface WFSetPlaybackDestinationAction : WFAction



-(id)errorFromRoutePickerError:(id)arg0 ;
-(id)errorUserInfoForRoutePickerErrorCode:(NSInteger)arg0 ;
-(id)routeDescriptor;
-(id)subcategoryForCategory:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif