// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPDATASTREAMTRANSPORTCONFIGURATION_H
#define HAPDATASTREAMTRANSPORTCONFIGURATION_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPTLVUnsignedNumberValue.h"
#import "HAPDataStreamTransportProtocolWrapper.h"

@interface HAPDataStreamTransportConfiguration : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *maximumControllerTransportMTU; // ivar: _maximumControllerTransportMTU
@property (readonly) Class superclass;
@property (retain, nonatomic) HAPDataStreamTransportProtocolWrapper *transport; // ivar: _transport


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTransport:(id)arg0 maximumControllerTransportMTU:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif