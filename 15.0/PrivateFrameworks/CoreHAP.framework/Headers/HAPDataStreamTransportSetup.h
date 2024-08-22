// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPDATASTREAMTRANSPORTSETUP_H
#define HAPDATASTREAMTRANSPORTSETUP_H

@class NSData, NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPDataStreamTransportCommandWrapper.h"
#import "HAPDataStreamTransportProtocolWrapper.h"

@interface HAPDataStreamTransportSetup : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPDataStreamTransportCommandWrapper *command; // ivar: _command
@property (retain, nonatomic) NSData *controllerKeySalt; // ivar: _controllerKeySalt
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPDataStreamTransportProtocolWrapper *transportType; // ivar: _transportType


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCommand:(id)arg0 transportType:(id)arg1 controllerKeySalt:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif