// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPDATASTREAMTRANSPORTPARAMETERS_H
#define HAPDATASTREAMTRANSPORTPARAMETERS_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPTLVUnsignedNumberValue.h"

@interface HAPDataStreamTransportParameters : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *tcpListeningPort; // ivar: _tcpListeningPort


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTcpListeningPort:(id)arg0 sessionIdentifier:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif