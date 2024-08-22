// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BONJOURPROBE_H
#define BONJOURPROBE_H

@class NSMutableDictionary;
@protocol OS_dispatch_source, BonjourProbeDelegate, OS_dispatch_queue;


#import "TestProbe.h"

@interface BonjourProbe : TestProbe {
    *BonjourBrowser bonjourManagerRef;
}


@property (retain, nonatomic) NSMutableDictionary *allDiscoveredServices; // ivar: _allDiscoveredServices
@property (retain, nonatomic) NSObject<OS_dispatch_source> *bonjourBrowserTimer; // ivar: _bonjourBrowserTimer
@property (nonatomic) CGFloat bonjourBrowserTimerDuration; // ivar: _bonjourBrowserTimerDuration
@property (retain, nonatomic) NSMutableDictionary *currentlyDiscoveredServices; // ivar: _currentlyDiscoveredServices
@property (retain) NSObject<BonjourProbeDelegate> *delegate; // ivar: _delegate
@property (nonatomic) *_DNSServiceRef_t dnsRef; // ivar: _dnsRef
@property BOOL includeAWDL; // ivar: _includeAWDL
@property (retain, nonatomic) NSMutableDictionary *resolvers; // ivar: _resolvers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scanQueue; // ivar: _scanQueue


-(BOOL)loadBonjourSymbols;
-(id)initWithQueue:(id)arg0 ;
-(void)cancelTest:(id)arg0 ;
-(void)dnsResolver:(id)arg0 encounteredDNSError:(int)arg1 ;
-(void)startBonjourScanForService:(id)arg0 onInterfaceNamed:(id)arg1 ;
-(void)stopAllResolvers;
-(void)stopTest;


@end


#endif