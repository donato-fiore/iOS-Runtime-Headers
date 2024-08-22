// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCHANGEPLAYBACKDESTINATIONACTION_H
#define WFCHANGEPLAYBACKDESTINATIONACTION_H

@class WFAction;



@interface WFChangePlaybackDestinationAction : WFAction



-(NSInteger)operation;
-(id)errorFromRoutePickerError:(id)arg0 ;
-(id)errorUserInfoForRoutePickerErrorCode:(NSInteger)arg0 ;
-(id)routeDescriptor;
-(id)subcategoryForCategory:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif