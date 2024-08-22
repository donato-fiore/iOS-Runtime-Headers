// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILTERPACKETEXTENSIONPROVIDERCONTEXT_H
#define NEFILTERPACKETEXTENSIONPROVIDERCONTEXT_H

@class NSMutableDictionary;
@protocol OS_nw_interpose;


#import "NEFilterExtensionProviderContext.h"

@interface NEFilterPacketExtensionProviderContext : NEFilterExtensionProviderContext {
    os_unfair_lock_s _lock;
}


@property (retain) NSMutableDictionary *interposes; // ivar: _interposes
@property (retain) NSObject<OS_nw_interpose> *nw_interpose; // ivar: _nw_interpose


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(BOOL)interposeClaimWithUUID:(id)arg0 ;
-(Class)requiredProviderSuperClass;
-(id)extensionPoint;
-(void)dealloc;
-(void)interposeHandleFlowEvent:(int)arg0 interface:(id)arg1 flow_id:(unsigned char)arg2 nexus_instance:(unsigned char)arg3 nexus_port:(unsigned int)arg4 key:(*void)arg5 key_length:(unsigned int)arg6 ;
-(void)startFilterWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithReason:(int)arg0 ;


@end


#endif