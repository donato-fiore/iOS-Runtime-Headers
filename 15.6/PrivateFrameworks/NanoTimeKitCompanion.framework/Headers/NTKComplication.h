// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCOMPLICATION_H
#define NTKCOMPLICATION_H

@class CLKCComplication, NSString;
@protocol NTKComplicationItem, NSSecureCoding, NSCopying;



@interface NTKComplication : CLKCComplication <NTKComplicationItem, NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (readonly, nonatomic) NSUInteger complicationType; // ivar: _complicationType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *ntk_contactIdentifier;
@property (readonly, nonatomic) NSString *ntk_identifier;
@property (readonly, nonatomic) NSUInteger ntk_itemType;
@property (readonly, nonatomic) NSString *ntk_sectionIdentifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
+(Class)_complicationClassForType:(NSUInteger)arg0 ;
+(id)_allComplicationConfigurationsWithType:(NSUInteger)arg0 ;
+(id)allComplicationsOfType:(NSUInteger)arg0 ;
+(id)anyComplicationOfType:(NSUInteger)arg0 ;
+(id)complicationWithJSONObjectRepresentation:(id)arg0 ;
+(id)nullComplication;
-(BOOL)appearsInDailySnapshotForFamily:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)snapshotContext:(id)arg0 isStaleRelativeToContext:(id)arg1 ;
-(BOOL)supportsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)JSONObjectRepresentation;
-(id)_generateAppIdentifier;
-(id)_initWithComplicationType:(NSUInteger)arg0 JSONDictionary:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customDailySnapshotKeyForFamily:(NSInteger)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComplicationType:(NSUInteger)arg0 ;
-(id)localizedDetailText;
-(id)localizedKeylineLabelText;
-(id)localizedRichDetailText;
-(id)localizedRichKeylineLabelText;
-(id)localizedSectionHeaderName;
-(id)ntk_localizedNameWithOptions:(NSUInteger)arg0 forRichComplicationSlot:(BOOL)arg1 ;
-(void)_addKeysToJSONDictionary:(id)arg0 ;
-(void)_handleAddedFromFaceSharing;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAddedFromFaceSharing;


@end


#endif