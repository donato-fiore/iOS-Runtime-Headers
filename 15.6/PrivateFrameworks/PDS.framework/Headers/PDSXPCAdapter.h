// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSXPCADAPTER_H
#define PDSXPCADAPTER_H

@class NSString;
@protocol PDSXPCInterfaceVendor, PDSXPCConnectionVendor;

#import <Foundation/Foundation.h>


@interface PDSXPCAdapter : NSObject <PDSXPCInterfaceVendor, PDSXPCConnectionVendor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)disableXPC;
+(id)_sharedInstance;
+(id)defaultConnectionVendor;
+(id)defaultInterfaceVendor;
+(void)setDisableXPC:(BOOL)arg0 ;
-(id)_init;
-(id)connectionForMachService:(id)arg0 ;
-(id)interfaceWithProtocol:(id)arg0 ;


@end


#endif