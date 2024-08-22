// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKPEOPLECOMPLICATION_H
#define NTKPEOPLECOMPLICATION_H

@class NSString;


#import "NTKComplication.h"

@interface NTKPeopleComplication : NTKComplication

@property (readonly, nonatomic) NSString *abbreviation; // ivar: _abbreviation
@property (readonly, nonatomic) NSString *contactID; // ivar: _contactID
@property (readonly, nonatomic, getter=isFavoritedPerson) BOOL favoritedPerson;
@property (readonly, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly, nonatomic) NSString *shortName; // ivar: _shortName
@property (readonly, nonatomic) NSString *storeBackedContactID; // ivar: _storeBackedContactID


+(BOOL)_complicationPickerShouldShowMoreButtonForList:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_allComplicationConfigurationsWithType:(NSUInteger)arg0 ;
+(id)allValidFavoriteContacts;
+(id)complicationForContact:(id)arg0 forFavoriteList:(BOOL)arg1 ;
+(id)localizedNameForContact:(id)arg0 ;
-(BOOL)appearsInDailySnapshotForFamily:(NSInteger)arg0 ;
-(BOOL)snapshotContext:(id)arg0 isStaleRelativeToContext:(id)arg1 ;
-(NSUInteger)ntk_itemType;
-(id)_complicationTypeString;
-(id)_generateUniqueIdentifier;
-(id)_initWithComplicationType:(NSUInteger)arg0 JSONDictionary:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customDailySnapshotKeyForFamily:(NSInteger)arg0 device:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDetailText;
-(id)localizedKeylineLabelText;
-(id)localizedRichDetailText;
-(id)localizedRichKeylineLabelText;
-(id)ntk_contactIdentifier;
-(id)ntk_sectionIdentifier;
-(void)_addKeysToJSONDictionary:(id)arg0 ;
-(void)_contactsCacheDidChange;
-(void)_refreshContactInfoNotifyOfChange;
-(void)_registerWithSwitch:(BOOL)arg0 ;
-(void)_updateStateWithContact:(id)arg0 foundAsPrimaryId:(BOOL)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif