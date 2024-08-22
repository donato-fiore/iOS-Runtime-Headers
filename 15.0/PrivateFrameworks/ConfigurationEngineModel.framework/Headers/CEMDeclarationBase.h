// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMDECLARATIONBASE_H
#define CEMDECLARATIONBASE_H

@class NSString, NSNumber;


#import "CEMPayloadBase.h"
#import "CEMAnyPayload.h"

@interface CEMDeclarationBase : CEMPayloadBase

@property (copy, nonatomic) NSString *declarationActivationScope; // ivar: _declarationActivationScope
@property (copy, nonatomic) NSString *declarationDescription; // ivar: _declarationDescription
@property (copy, nonatomic) NSString *declarationIdentifier; // ivar: _declarationIdentifier
@property (copy, nonatomic) CEMAnyPayload *declarationPayload; // ivar: _declarationPayload
@property (copy, nonatomic) NSNumber *declarationRequiresNetworkTether; // ivar: _declarationRequiresNetworkTether
@property (copy, nonatomic) NSString *declarationServerHash; // ivar: _declarationServerHash
@property (copy, nonatomic) NSString *declarationType; // ivar: _declarationType


+(id)declarationClass;
+(id)declarationForData:(id)arg0 error:(*id)arg1 ;
+(id)declarationForPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadDeclarationFromDictionary:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serialize;
-(id)serializeAsDataWithError:(*id)arg0 ;
-(void)updateServerHash;


@end


#endif