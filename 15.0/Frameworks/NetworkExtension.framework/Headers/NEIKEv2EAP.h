// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2EAP_H
#define NEIKEV2EAP_H

@class NSMutableData;

#import <Foundation/Foundation.h>

#import "NEIKEv2EAPProtocol.h"

@interface NEIKEv2EAP : NSObject {
    EAPClientPluginData_s _pluginData;
}


@property *EAPClientModule_s module; // ivar: _module
@property (retain) NEIKEv2EAPProtocol *protocol; // ivar: _protocol
@property (readonly) NSMutableData *sessionKey;


+(struct EAPClientModule_s *)getAKAModule;
+(struct EAPClientModule_s *)getGTCModule;
+(struct EAPClientModule_s *)getMSCHAPv2Module;
+(struct EAPClientModule_s *)getPEAPModule;
+(struct EAPClientModule_s *)getSIMModule;
+(struct EAPClientModule_s *)getTLSModule;
+(struct EAPClientModule_s *)loadModuleForType:(unsigned int)arg0 ;
+(unsigned int)codeForPayload:(id)arg0 ;
+(unsigned int)typeForPayload:(id)arg0 ;
-(id)copyProperties:(unsigned int)arg0 ;
-(id)createPayloadResponseForRequest:(id)arg0 ikeSA:(id)arg1 success:(*BOOL)arg2 reportEAPError:(*BOOL)arg3 ;
-(id)createPayloadResponseForRequest:(id)arg0 type:(unsigned int)arg1 typeData:(id)arg2 typeString:(id)arg3 ;
-(id)init;
-(id)selectModuleForPayload:(id)arg0 ikeSA:(id)arg1 ;
-(void)dealloc;


@end


#endif