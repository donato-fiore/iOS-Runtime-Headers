// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMDECLARATIONKEY_H
#define RMDECLARATIONKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RMDeclarationKey : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *declarationIdentifier; // ivar: _declarationIdentifier
@property (readonly, copy, nonatomic) NSString *declarationServerToken; // ivar: _declarationServerToken
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, copy, nonatomic) NSString *keyWithoutServerToken; // ivar: _keyWithoutServerToken
@property (readonly, copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (readonly, copy, nonatomic) NSString *subscriberIdentifier; // ivar: _subscriberIdentifier


+(id)newDeclarationKey:(id)arg0 ;
+(id)newDeclarationKeyWithSubscriberIdentifier:(id)arg0 store:(id)arg1 declaration:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDeclarationKey:(id)arg0 ;
-(id)initWithSubscriberIdentifier:(id)arg0 store:(id)arg1 declaration:(id)arg2 ;


@end


#endif