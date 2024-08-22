// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCONCRETEPRIVATEKEY_H
#define CRKCONCRETEPRIVATEKEY_H

@class NSData, NSString;
@protocol CRKPrivateKey;

#import <Foundation/Foundation.h>


@interface CRKConcretePrivateKey : NSObject <CRKPrivateKey>



@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) *__SecKey underlyingPrivateKey; // ivar: _underlyingPrivateKey


+(id)privateKeyWithData:(id)arg0 ;
-(id)initWithPrivateKey:(struct __SecKey *)arg0 ;
-(void)dealloc;


@end


#endif