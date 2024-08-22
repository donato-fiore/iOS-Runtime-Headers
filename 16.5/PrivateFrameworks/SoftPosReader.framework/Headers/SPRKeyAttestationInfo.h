// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRKEYATTESTATIONINFO_H
#define SPRKEYATTESTATIONINFO_H

@class NSData;
@protocol SPRDERRepresentable;

#import <Foundation/Foundation.h>

#import "SPRKeyAttestationRequest.h"

@interface SPRKeyAttestationInfo : NSObject <SPRDERRepresentable>



@property (readonly, copy) NSData *derRepresentation;
@property (readonly, nonatomic) SPRKeyAttestationRequest *request; // ivar: _request
@property (readonly, copy, nonatomic) NSData *signature; // ivar: _signature


-(id)initWithDERRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)initWithRequest:(id)arg0 signature:(id)arg1 ;


@end


#endif