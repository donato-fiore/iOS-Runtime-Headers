// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECPERSONITEM_H
#define _DECPERSONITEM_H

@class DECItem, CNContact, NSString, CNContactProperty;



@interface _DECPersonItem : DECItem

@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic) CNContactProperty *contactProperty; // ivar: _contactProperty


+(BOOL)supportsSecureCoding;
+(NSUInteger)category;
+(id)personWithContact:(id)arg0 ;
+(id)personWithContactIdentifier:(id)arg0 ;
+(id)personWithContactProperty:(id)arg0 ;
-(BOOL)_isEqualToDECPersonItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContactIdentifier:(id)arg0 ;
-(id)initWithContactProperty:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif