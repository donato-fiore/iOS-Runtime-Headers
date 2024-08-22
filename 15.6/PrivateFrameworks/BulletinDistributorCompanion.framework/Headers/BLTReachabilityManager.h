// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTREACHABILITYMANAGER_H
#define BLTREACHABILITYMANAGER_H

@class NSString;
@protocol PCInterfaceMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLTReachabilityManager : NSObject <PCInterfaceMonitorDelegate>

 {
    NSObject<OS_dispatch_queue> *_updateQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isInternetReachable) BOOL internetReachable; // ivar: _internetReachable
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)interfaceLinkQualityChanged:(id)arg0 previousLinkQuality:(int)arg1 ;
-(void)interfaceRadioHotnessChanged:(id)arg0 ;
-(void)interfaceReachabilityChanged:(id)arg0 ;


@end


#endif