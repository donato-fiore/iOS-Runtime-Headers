// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGIDENTITYKEY_H
#define SGIDENTITYKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SGIdentityKey : NSObject <NSCopying>

 {
    NSString *_content;
}


@property (readonly, nonatomic) NSString *externalId;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)isSupportedEntityType:(NSInteger)arg0 ;
+(NSUInteger)identityTypeForKeyPart:(id)arg0 ;
+(id)keyForContactExternalId:(int)arg0 ;
+(id)keyForContactUniqueId:(id)arg0 ;
+(id)keyForEmail:(id)arg0 ;
+(id)keyForInstantMessageAddress:(id)arg0 ;
+(id)keyForNormalizedEmail:(id)arg0 ;
+(id)keyForNormalizedPhone:(id)arg0 ;
+(id)keyForPersonHandle:(id)arg0 ;
+(id)keyForSocialProfile:(id)arg0 ;
-(BOOL)hasEmailAddress;
-(BOOL)hasInstantMessageAddress;
-(BOOL)hasPhone;
-(BOOL)hasSocialProfile;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIdentityKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)emailAddress;
-(id)identityKey;
-(id)initWithSerialized:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 content:(id)arg1 ;
-(id)instantMessageAddress;
-(id)phone;
-(id)serialize;
-(id)socialProfile;
-(id)uniqueIdentifier;


@end


#endif