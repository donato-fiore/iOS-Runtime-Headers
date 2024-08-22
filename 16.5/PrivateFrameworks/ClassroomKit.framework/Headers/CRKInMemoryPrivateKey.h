// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKINMEMORYPRIVATEKEY_H
#define CRKINMEMORYPRIVATEKEY_H

@class NSData, NSString;
@protocol CRKPrivateKey;

#import <Foundation/Foundation.h>

#import "CRKIdentityConfiguration.h"

@interface CRKInMemoryPrivateKey : NSObject <CRKPrivateKey>



@property (readonly, copy, nonatomic) CRKIdentityConfiguration *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) *__SecKey underlyingPrivateKey;


-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithData:(id)arg0 ;


@end


#endif