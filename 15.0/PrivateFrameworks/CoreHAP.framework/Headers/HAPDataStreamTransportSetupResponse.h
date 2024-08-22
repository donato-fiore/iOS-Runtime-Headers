// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPDATASTREAMTRANSPORTSETUPRESPONSE_H
#define HAPDATASTREAMTRANSPORTSETUPRESPONSE_H

@class NSData, NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPDataStreamTransportParameters.h"
#import "HAPDataStreamTransportCommandStatusWrapper.h"

@interface HAPDataStreamTransportSetupResponse : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) NSData *accessoryKeySalt; // ivar: _accessoryKeySalt
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPDataStreamTransportParameters *parameters; // ivar: _parameters
@property (retain, nonatomic) HAPDataStreamTransportCommandStatusWrapper *status; // ivar: _status
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStatus:(id)arg0 parameters:(id)arg1 accessoryKeySalt:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif