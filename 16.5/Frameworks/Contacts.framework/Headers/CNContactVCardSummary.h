// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTVCARDSUMMARY_H
#define CNCONTACTVCARDSUMMARY_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNContactVCardSummary : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *avatarContacts; // ivar: _avatarContacts
@property (readonly, nonatomic) NSUInteger contactCount; // ivar: _contactCount
@property (readonly, copy, nonatomic) NSString *descriptiveLabel;
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)isAvatarContacts:(id)arg0 equalTo:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)defaultNameFormatter;
+(id)localizedStringWithName:(id)arg0 andOtherName:(id)arg1 ;
+(id)localizedStringWithName:(id)arg0 andThisManyOthers:(NSUInteger)arg1 ;
+(id)makeFormatter;
+(id)nameForContact:(id)arg0 ;
+(id)namesForContact:(id)arg0 ;
+(id)readingOptionsWithContactLimit:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 contactCount:(NSUInteger)arg2 avatarContacts:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif