// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKWORLDCLOCKCOMPLICATION_H
#define NTKWORLDCLOCKCOMPLICATION_H

@class WorldClockCity;


#import "NTKComplication.h"

@interface NTKWorldClockComplication : NTKComplication

@property (readonly, nonatomic) WorldClockCity *city; // ivar: _city


+(BOOL)supportsSecureCoding;
+(NSInteger)compareCompication:(id)arg0 toComplication:(id)arg1 ;
+(id)_allCities;
+(id)_allComplicationConfigurationsWithType:(NSUInteger)arg0 ;
-(BOOL)appearsInDailySnapshotForFamily:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)snapshotContext:(id)arg0 isStaleRelativeToContext:(id)arg1 ;
-(id)_generateUniqueIdentifier;
-(id)_initWithComplicationType:(NSUInteger)arg0 JSONDictionary:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customDailySnapshotKeyForFamily:(NSInteger)arg0 device:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDetailText;
-(id)localizedKeylineLabelText;
-(id)localizedRichDetailText;
-(id)localizedRichKeylineLabelText;
-(void)_addKeysToJSONDictionary:(id)arg0 ;
-(void)_handleAddedFromFaceSharing;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif