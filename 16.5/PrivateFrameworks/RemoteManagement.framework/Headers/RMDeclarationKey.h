// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
+(id)newDeclarationKeyWithSubscriberIdentifier:(id)arg0 storeIdentifier:(id)arg1 declarationIdentifier:(id)arg2 declarationServerToken:(id)arg3 ;
+(void)synchronizeOldKeys:(id)arg0 newKeys:(id)arg1 returningUnchangedKeys:(*id)arg2 returningNewAddKeys:(*id)arg3 returningNewChangeKeys:(*id)arg4 returningOldReplaceKeys:(*id)arg5 returningOldRemoveKeys:(*id)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDeclarationKey:(id)arg0 ;
-(id)initWithSubscriberIdentifier:(id)arg0 store:(id)arg1 declaration:(id)arg2 ;
-(id)initWithSubscriberIdentifier:(id)arg0 storeIdentifier:(id)arg1 declarationIdentifier:(id)arg2 declarationServerToken:(id)arg3 ;


@end


#endif