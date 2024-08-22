// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NGMPUBLICPREKEY_H
#define NGMPUBLICPREKEY_H

@class NSData;

#import <Foundation/Foundation.h>

#import "DHPublicKey.h"

@interface NGMPublicPreKey : NSObject

@property (readonly, nonatomic) DHPublicKey *dhKey; // ivar: _dhKey
@property (readonly, nonatomic) NSData *signature; // ivar: _signature
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isValidlySignedBy:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initRemotePrekeyWithPublicPrekey:(id)arg0 signedBy:(id)arg1 error:(*id)arg2 ;
-(id)initWithPublicKey:(id)arg0 signature:(id)arg1 timestamp:(CGFloat)arg2 ;


@end


#endif