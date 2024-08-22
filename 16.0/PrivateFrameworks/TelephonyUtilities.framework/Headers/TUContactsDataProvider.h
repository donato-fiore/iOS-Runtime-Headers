// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCONTACTSDATAPROVIDER_H
#define TUCONTACTSDATAPROVIDER_H

@protocol TUContactsDataSource;

#import <Foundation/Foundation.h>

#import "TUContactsDataProviderAppleCareHandles.h"

@interface TUContactsDataProvider : NSObject

@property (copy, nonatomic) TUContactsDataProviderAppleCareHandles *appleCareHandles; // ivar: _appleCareHandles
@property (readonly, nonatomic) NSObject<TUContactsDataSource> *contactsDataSource; // ivar: _contactsDataSource
@property (copy, nonatomic) id *localeSupportsPrefixHintForFetchRequest; // ivar: _localeSupportsPrefixHintForFetchRequest
@property (nonatomic) BOOL useAsianNameFormat; // ivar: _useAsianNameFormat


+(id)asianLocaleCountryCodes;
+(id)defaultContactKeyDescriptors;
+(id)keysByCombiningDefaultKeysWithKeysToFetch:(id)arg0 ;
+(id)numberFormatter;
+(id)unsupportedLocalesForPrefixHint;
-(id)ISOCountryCodeForHandle:(id)arg0 fetchRequest:(id)arg1 ;
-(id)compositeNameForContacts:(id)arg0 ;
-(id)compositeNameForFetchRequest:(id)arg0 ;
-(id)contactLabelForContacts:(id)arg0 matchingHandle:(id)arg1 countryCode:(id)arg2 ;
-(id)contactWithIdentifier:(id)arg0 keysToFetch:(id)arg1 ;
-(id)contactsForHandle:(id)arg0 countryCode:(id)arg1 keysToFetch:(id)arg2 prefixHint:(id)arg3 ;
-(id)executeFetchRequest:(id)arg0 ;
-(id)formattedNameForHandle:(id)arg0 countryCode:(id)arg1 ;
-(id)init;
-(id)initWithContactsDataSource:(id)arg0 ;
-(id)labeledHandlesForContactWithIdentifier:(id)arg0 ;
-(id)labeledHandlesForContacts:(id)arg0 ;
-(id)localizedCompositeNameForContact:(id)arg0 secondContact:(id)arg1 ;
-(id)prefixHintForFetchRequest:(id)arg0 ;
-(id)unifiedContactsForFetchRequest:(id)arg0 ;
-(int)personIDForContact:(id)arg0 ;


@end


#endif