// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MODIFYCONTACTATTRIBUTEINTENT_H
#define MODIFYCONTACTATTRIBUTEINTENT_H

@class INIntent, NSString, NSArray;


#import "Contact.h"

@interface ModifyContactAttributeIntent : INIntent

@property (nonatomic) NSInteger contactAttributeToModify;
@property (nonatomic, copy) NSString *modifyNickName;
@property (nonatomic) NSInteger modifyOperation;
@property (nonatomic, copy) NSString *modifyRelationship;
@property (nonatomic, retain) Contact *relatedContact;
@property (nonatomic, copy) NSArray *relatedSiriMatches;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif