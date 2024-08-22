// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14SIRIKITRUNTIME23SHAREDFLOWPLUGINSERVICE_H
#define _TTC14SIRIKITRUNTIME23SHAREDFLOWPLUGINSERVICE_H

@class SwiftObject;
@protocol SKRSharedFlowPluginServiceXPC;



@interface _TtC14SiriKitRuntime23SharedFlowPluginService : SwiftObject <SKRSharedFlowPluginServiceXPC>

 {
    ? flowLoader;
    ? siriKitRuntime;
    ? warmupTracker;
}




-(void)loadFlowPluginWithBundleId:(id)arg0 bundlePath:(id)arg1 reply:(id)arg2 ;
-(void)startTurnWithTurnData:(id)arg0 bridge:(id)arg1 reply:(id)arg2 ;


@end


#endif