// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKCLIENTTOKENOBJECT_H
#define TKCLIENTTOKENOBJECT_H

@class NSData, NSDictionary;

#import <Foundation/Foundation.h>

#import "TKClientTokenSession.h"

@interface TKClientTokenObject : NSObject {
    id *_accessControlRef;
}


@property (readonly, nonatomic) NSData *accessControl; // ivar: _accessControl
@property (readonly, nonatomic) *__SecAccessControl accessControlRef;
@property (readonly, nonatomic) NSDictionary *keychainAttributes; // ivar: _keychainAttributes
@property (readonly, nonatomic) NSData *objectID; // ivar: _objectID
@property (readonly, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (readonly, nonatomic) TKClientTokenSession *session; // ivar: _session
@property (readonly, nonatomic) NSData *value; // ivar: _value


-(BOOL)bumpKeyWithError:(*id)arg0 ;
-(BOOL)commitKeyWithError:(*id)arg0 ;
-(BOOL)deleteWithError:(*id)arg0 ;
-(id)attestKey:(id)arg0 nonce:(id)arg1 error:(*id)arg2 ;
-(id)decrypt:(id)arg0 algorithms:(id)arg1 parameters:(id)arg2 error:(*id)arg3 ;
-(id)exchangeKey:(id)arg0 algorithms:(id)arg1 parameters:(id)arg2 error:(*id)arg3 ;
-(id)initWithSession:(id)arg0 objectID:(id)arg1 attributes:(id)arg2 ;
-(id)operation:(NSInteger)arg0 data:(id)arg1 algorithms:(id)arg2 parameters:(id)arg3 error:(*id)arg4 ;
-(id)operationResult:(id)arg0 error:(*id)arg1 ;
-(id)sign:(id)arg0 algorithms:(id)arg1 parameters:(id)arg2 error:(*id)arg3 ;


@end


#endif