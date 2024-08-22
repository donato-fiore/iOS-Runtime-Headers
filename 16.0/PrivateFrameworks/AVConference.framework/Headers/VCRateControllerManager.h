// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCRATECONTROLLERMANAGER_H
#define VCRATECONTROLLERMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "VCObject.h"

@interface VCRateControllerManager : VCObject {
    NSMutableDictionary *_shareProfileDictionary;
    NSMutableDictionary *_rateSharingClientMap;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}




+(id)sharedInstance;
-(BOOL)deregisterRateSharingClient:(id)arg0 ;
-(BOOL)registerRateSharingClient:(id)arg0 forInterfaceType:(unsigned int)arg1 ;
-(id)init;
-(unsigned int)countRateControllersForInterfaceType:(id)arg0 ;
-(void)dealloc;
-(void)updateShareProfileForInterfaceType:(id)arg0 ;


@end


#endif