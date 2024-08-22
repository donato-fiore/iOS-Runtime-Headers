// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSIRIENDPOINTSESSIONSTATETLV_H
#define HMDSIRIENDPOINTSESSIONSTATETLV_H

@class NSString, NSData, NSUUID;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDSiriEndpointSessionStateTypeWrapper.h"

@interface HMDSiriEndpointSessionStateTLV : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *hubIdentifier; // ivar: _hubIdentifier
@property (readonly) NSUUID *hubUUID;
@property (retain, nonatomic) HMDSiriEndpointSessionStateTypeWrapper *sessionState; // ivar: _sessionState
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSessionState:(id)arg0 hubIdentifier:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif