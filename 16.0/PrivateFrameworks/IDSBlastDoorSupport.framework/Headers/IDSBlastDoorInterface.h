// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSBLASTDOORINTERFACE_H
#define IDSBLASTDOORINTERFACE_H


#import <Foundation/Foundation.h>

#import "IDSBlastDoorInterfaceInternal.h"

@interface IDSBlastDoorInterface : NSObject

@property (retain, nonatomic) IDSBlastDoorInterfaceInternal *interface; // ivar: _interface


-(id)init;
-(void)unpackCommandResponsePayload:(id)arg0 resultHandler:(id)arg1 ;
-(void)unpackCommandWebTunnelResponsePayload:(id)arg0 resultHandler:(id)arg1 ;
-(void)unpackGeneralCommandPayload:(id)arg0 resultHandler:(id)arg1 ;
-(void)unpackPayloadDictionary:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif