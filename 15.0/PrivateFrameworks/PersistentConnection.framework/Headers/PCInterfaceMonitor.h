// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCINTERFACEMONITOR_H
#define PCINTERFACEMONITOR_H

@class NSMapTable, NSString;
@protocol PCInterfaceUsabilityMonitorDelegate, PCInterfaceMonitorProtocol, PCInterfaceUsabilityMonitorProtocol;

#import <Foundation/Foundation.h>


@interface PCInterfaceMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceMonitorProtocol>

 {
    id<PCInterfaceUsabilityMonitorProtocol> *_internal;
    NSMapTable *_delegateMap;
}


@property (readonly, nonatomic) int currentRAT;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger interface5GMode;
@property (readonly, nonatomic) NSInteger interfaceIdentifier;
@property (readonly, nonatomic) BOOL isBadLinkQuality;
@property (readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property (readonly, nonatomic) BOOL isInterfaceUsable;
@property (readonly, nonatomic) BOOL isInternetReachable;
@property (readonly, nonatomic) BOOL isLTEWithCDRX;
@property (readonly, nonatomic) BOOL isNetworkingPowerExpensiveToUse;
@property (readonly, nonatomic) BOOL isPoorLinkQuality;
@property (readonly, nonatomic) BOOL isRadioHot;
@property (readonly, nonatomic) int linkQuality;
@property (readonly, retain, nonatomic) NSString *linkQualityString;
@property (readonly, nonatomic) NSString *networkCode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) *__CFString wwanInterfaceName;


+(BOOL)isBadLinkQuality:(int)arg0 ;
+(BOOL)isPoorLinkQuality:(int)arg0 ;
+(id)sharedInstanceForIdentifier:(NSInteger)arg0 ;
+(id)stringForLinkQuality:(int)arg0 ;
-(id)initWithInterfaceIdentifier:(NSInteger)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)interfaceLinkQualityChanged:(id)arg0 previousLinkQuality:(int)arg1 ;
-(void)interfaceRadioHotnessChanged:(id)arg0 ;
-(void)interfaceReachabilityChanged:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif