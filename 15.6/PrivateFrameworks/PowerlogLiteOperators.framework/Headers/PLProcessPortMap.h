// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPROCESSPORTMAP_H
#define PLPROCESSPORTMAP_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLProcessPortMap : NSObject

@property (retain) NSMutableDictionary *ipAddrLookupMap; // ivar: _ipAddrLookupMap
@property (retain) NSMutableDictionary *lenientLookupMap; // ivar: _lenientLookupMap
@property (retain) NSMutableDictionary *localPortOnlyLookupMap; // ivar: _localPortOnlyLookupMap
@property (retain) NSMutableDictionary *strictLookupMap; // ivar: _strictLookupMap
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedInstance;
-(BOOL)isAddressIPV4:(id)arg0 ;
-(id)dictFromNetPortInfo:(struct net_port_info *)arg0 ;
-(id)getLookupKeys:(id)arg0 ;
-(id)init;
-(id)keyForIPAddrLookup:(id)arg0 withSourceAddress:(id)arg1 ;
-(id)keyForlenientLookup:(id)arg0 withPort:(id)arg1 withProtocol:(id)arg2 ;
-(id)keyForlocalPortLookup:(id)arg0 withProtocol:(id)arg1 ;
-(id)keyFromAddress:(id)arg0 withPort:(id)arg1 withSourceAddress:(id)arg2 withSourcePort:(id)arg3 withProtocol:(id)arg4 ;
-(id)pidAndProcessNameForDestAddress:(id)arg0 withDestPort:(id)arg1 withSourceAddress:(id)arg2 withSourcePort:(id)arg3 withProtocol:(id)arg4 ;
-(void)clearPortMap;
-(void)clearPortMapInternal;
-(void)dealloc;
-(void)reconstructPortMap;
-(void)reconstructPortMapInternal;


@end


#endif