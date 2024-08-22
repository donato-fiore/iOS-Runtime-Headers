// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CONTACT_H
#define CONTACT_H

@class INObject, NSString;



@interface Contact : INObject

@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *namePrefix;
@property (nonatomic, copy) NSString *nameSuffix;
@property (nonatomic, copy) NSString *nickName;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif