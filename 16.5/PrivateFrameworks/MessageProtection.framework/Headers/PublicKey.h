// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUBLICKEY_H
#define PUBLICKEY_H

@protocol P256PublicKeyProtocol;

#import <Foundation/Foundation.h>


@interface PublicKey : NSObject

@property (retain) NSObject<P256PublicKeyProtocol> *key; // ivar: _key


-(BOOL)isEqual:(id)arg0 ;
-(id)dataRepresentation;
-(id)description;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithKey:(id)arg0 ;


@end


#endif