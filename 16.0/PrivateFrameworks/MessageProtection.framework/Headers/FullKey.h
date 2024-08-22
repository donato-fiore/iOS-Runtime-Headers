// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FULLKEY_H
#define FULLKEY_H

@class NSString;
@protocol P256PrivateKeyProtocol;

#import <Foundation/Foundation.h>


@interface FullKey : NSObject

@property (readonly) NSObject<P256PrivateKeyProtocol> *key; // ivar: _key
@property (readonly) int keyStore; // ivar: _keyStore
@property (retain) NSString *keychainTag; // ivar: _keychainTag


+(id)generateNewKeyWithAccess:(id)arg0 error:(*id)arg1 ;
+(id)generateNewKeyWithAccess:(id)arg0 forceNoSEP:(BOOL)arg1 error:(*id)arg2 ;
-(id)description;
-(id)initWithCTKTokenOID:(id)arg0 error:(*id)arg1 ;
-(id)initWithKey:(id)arg0 error:(*id)arg1 ;
-(id)initWithKeychainTag:(id)arg0 error:(*id)arg1 ;
-(id)initWithProtobufferData:(id)arg0 error:(*id)arg1 ;
-(id)protobuffer;


@end


#endif