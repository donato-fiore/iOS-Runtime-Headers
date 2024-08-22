// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFILTERPACKETEXTENSIONPROVIDERCONTEXT_H
#define NEFILTERPACKETEXTENSIONPROVIDERCONTEXT_H

@class NSMutableDictionary;
@protocol OS_nw_interpose;


#import "NEFilterExtensionProviderContext.h"

@interface NEFilterPacketExtensionProviderContext : NEFilterExtensionProviderContext {
    os_unfair_lock_s _lock;
    NSObject<OS_nw_interpose> *_nw_interpose;
    NSMutableDictionary *_interposes;
}




+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(Class)requiredProviderSuperClass;
-(id)extensionPoint;
-(void)dealloc;
-(void)startFilterWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithReason:(int)arg0 ;


@end


#endif