// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISUPPLEMENTALPERSONITEM_H
#define _UISUPPLEMENTALPERSONITEM_H

@class UISupplementalItem, NSString;



@interface _UISupplementalPersonItem : UISupplementalItem

@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *phoneticOrganizationName;


+(id)new;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContact:(id)arg0 icon:(id)arg1 ;
-(id)initWithPersonNameComponents:(id)arg0 ;
-(id)initWithPersonNameComponents:(id)arg0 icon:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif