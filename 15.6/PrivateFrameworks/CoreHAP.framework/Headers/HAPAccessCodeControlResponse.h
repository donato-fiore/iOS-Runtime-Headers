// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPACCESSCODECONTROLRESPONSE_H
#define HAPACCESSCODECONTROLRESPONSE_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPAccessCodeFlagsWrapper.h"
#import "HAPTLVUnsignedNumberValue.h"
#import "HAPAccessCodeResponseStatusWrapper.h"

@interface HAPAccessCodeControlResponse : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) NSString *accessCode; // ivar: _accessCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HAPAccessCodeFlagsWrapper *flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *identifier; // ivar: _identifier
@property (retain, nonatomic) HAPAccessCodeResponseStatusWrapper *statusCode; // ivar: _statusCode
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 accessCode:(id)arg1 flags:(id)arg2 statusCode:(id)arg3 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif