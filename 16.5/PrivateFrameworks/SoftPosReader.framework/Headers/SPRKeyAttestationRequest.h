// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRKEYATTESTATIONREQUEST_H
#define SPRKEYATTESTATIONREQUEST_H

@class NSData;
@protocol SPRDERRepresentable;

#import <Foundation/Foundation.h>


@interface SPRKeyAttestationRequest : NSObject <SPRDERRepresentable>



@property (readonly, copy) NSData *derRepresentation; // ivar: _derRepresentation
@property (readonly, copy, nonatomic) NSData *publicKeyInfo; // ivar: _publicKeyInfo


-(id)initWithDERRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)initWithPublicKeyInfo:(id)arg0 ;
-(id)initWithSequence:(struct ? *)arg0 error:(*id)arg1 ;


@end


#endif