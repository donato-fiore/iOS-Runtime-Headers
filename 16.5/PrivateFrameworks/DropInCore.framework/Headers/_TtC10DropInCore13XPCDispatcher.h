// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10DROPINCORE13XPCDISPATCHER_H
#define _TTC10DROPINCORE13XPCDISPATCHER_H

@class SwiftObject;
@protocol DIXPCServerInterface;



@interface _TtC10DropInCore13XPCDispatcher : SwiftObject <DIXPCServerInterface>

 {
    ? dropInManager;
    ? audioSystemManager;
    ? logger;
    ? xpcClientDataSource;
}




-(void)cancelSessionWithContext:(id)arg0 session:(id)arg1 error:(id)arg2 completionHandler:(id)arg3 ;
-(void)checkInWithCompletionHandler:(id)arg0 ;
-(void)endSessionWithContext:(id)arg0 session:(id)arg1 completionHandler:(id)arg2 ;
-(void)getCurrentSessionWithCompletionHandler:(id)arg0 ;
-(void)getDownlinkMutedWithCompletionHandler:(id)arg0 ;
-(void)getUplinkMutedForCurrentSessionWithCompletionHandler:(id)arg0 ;
-(void)getUplinkMutedWithCompletionHandler:(id)arg0 ;
-(void)loadDevicesWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerAudioPowerWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestStateForDevice:(id)arg0 completionHandler:(id)arg1 ;
-(void)setDownlinkMuted:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setUplinkMuted:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setUplinkMutedForCurrentSession:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)startSessionWithContext:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateState:(NSInteger)arg0 reason:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif