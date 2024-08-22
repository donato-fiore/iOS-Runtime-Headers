// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFOVERLAYIMAGEACTION_H
#define WFOVERLAYIMAGEACTION_H

@class WFAction;



@interface WFOverlayImageAction : WFAction



+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
// -(void)getImageInputs:(id)arg0 withInput:(unk)arg1  ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runWithNoUserInterface:(id)arg0 ;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;


@end


#endif