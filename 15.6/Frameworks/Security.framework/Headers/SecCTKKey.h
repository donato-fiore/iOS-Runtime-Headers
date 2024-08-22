// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SECCTKKEY_H
#define SECCTKKEY_H

@class NSDictionary, TKClientTokenObject;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SecCTKKey : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *keychainAttributes; // ivar: _keychainAttributes
@property (retain, nonatomic) NSDictionary *sessionParameters; // ivar: _sessionParameters
@property (retain, nonatomic) TKClientTokenObject *tokenObject; // ivar: _tokenObject


+(id)fromKeyRef:(struct __SecKey *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromKey:(id)arg0 ;
-(id)initWithAttributes:(id)arg0 error:(*id)arg1 ;
-(id)performOperation:(NSInteger)arg0 data:(id)arg1 algorithms:(id)arg2 parameters:(id)arg3 error:(*id)arg4 ;


@end


#endif