// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTSTOREFILTER_H
#define CNCONTACTSTOREFILTER_H

@class NSSet;


#import "CNContactFilter.h"

@interface CNContactStoreFilter : CNContactFilter

@property (retain, nonatomic) NSSet *containerIdentifiers; // ivar: _containerIdentifiers
@property (retain, nonatomic) NSSet *groupIdentifiers; // ivar: _groupIdentifiers
@property (nonatomic) BOOL isServerFilter; // ivar: _isServerFilter
@property (readonly, nonatomic) BOOL showsEverything;


+(BOOL)getContainerIdentifiers:(*id)arg0 groupIdentifiers:(*id)arg1 serverFilter:(*BOOL)arg2 fromLegacyDictionary:(id)arg3 contactStore:(id)arg4 ;
+(BOOL)getContainerIdentifiers:(*id)arg0 groupIdentifiers:(*id)arg1 serverFilter:(*BOOL)arg2 fromPreSundanceDictionary:(id)arg3 contactStore:(id)arg4 ;
+(BOOL)getContainerIdentifiers:(*id)arg0 groupIdentifiers:(*id)arg1 serverFilter:(*BOOL)arg2 fromSundanceToOkemoAndAddressBookUIDictionary:(id)arg3 contactStore:(id)arg4 ;
+(id)contactStoreFilterFromPreferencesWithContactStore:(id)arg0 ;
+(id)excludedContainerIdentifiersDictionaryKey;
+(id)excludedGroupIdentifiersDictionaryKey;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsSections;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithContactStore:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 contactStore:(id)arg1 ;
-(id)predicate;
-(void)addAddressBookUIKeysToDictionaryRepresentation:(id)arg0 withAllContainers:(id)arg1 excludedContainers:(id)arg2 excludedGroups:(id)arg3 ;
-(void)saveToPreferencesWithContactStore:(id)arg0 ;


@end


#endif