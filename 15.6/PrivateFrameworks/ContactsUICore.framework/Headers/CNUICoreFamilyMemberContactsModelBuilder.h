// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUICOREFAMILYMEMBERCONTACTSMODELBUILDER_H
#define CNUICOREFAMILYMEMBERCONTACTSMODELBUILDER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CNUICoreContactTypeAssessor.h"

@interface CNUICoreFamilyMemberContactsModelBuilder : NSObject

@property (nonatomic) NSInteger contactFormatterStyle; // ivar: _contactFormatterStyle
@property (retain, nonatomic) CNUICoreContactTypeAssessor *contactTypeAssessor; // ivar: _contactTypeAssessor
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (nonatomic) BOOL includeWhitelistedContactsOnly; // ivar: _includeWhitelistedContactsOnly
@property (nonatomic) BOOL markItemsAsPersisted; // ivar: _markItemsAsPersisted
@property (nonatomic) BOOL markItemsAsProposed; // ivar: _markItemsAsProposed
@property (nonatomic) BOOL sortItemsByName; // ivar: _sortItemsByName


+(BOOL)shouldIncludeContact:(id)arg0 givenIncludeWhitelistedContactsOnlySetting:(BOOL)arg1 ;
+(id)familyMemberContactItemFromContact:(id)arg0 contactFormatterStyle:(NSInteger)arg1 contactTypeAssessor:(id)arg2 itemHasBeenPersisted:(BOOL)arg3 itemIsProposed:(BOOL)arg4 ;
+(id)firstDisplayableEmailAddressForContact:(id)arg0 ;
+(id)firstDisplayablePhoneNumberForContact:(id)arg0 ;
+(id)formattedNameOfContact:(id)arg0 contactFormatterStyle:(NSInteger)arg1 ;
+(id)itemsBySortingItems:(id)arg0 ;
+(id)placeholderNameForNamelessContact:(id)arg0 ;
+(id)uniqueFamilyMemberContactItems:(id)arg0 ;
-(id)build;
-(id)init;
-(id)sortedFamilyMemberContactItems:(id)arg0 ;


@end


#endif