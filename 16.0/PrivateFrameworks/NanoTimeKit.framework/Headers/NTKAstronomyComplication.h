// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKASTRONOMYCOMPLICATION_H
#define NTKASTRONOMYCOMPLICATION_H



#import "NTKComplication.h"

@interface NTKAstronomyComplication : NTKComplication

@property (readonly, nonatomic) NSUInteger vista; // ivar: _vista


+(BOOL)supportsSecureCoding;
+(id)_allComplicationConfigurationsWithType:(NSUInteger)arg0 ;
-(BOOL)appearsInDailySnapshotForFamily:(NSInteger)arg0 ;
-(BOOL)snapshotContext:(id)arg0 isStaleRelativeToContext:(id)arg1 ;
-(id)_generateUniqueIdentifier;
-(id)_initWithComplicationType:(NSUInteger)arg0 JSONDictionary:(id)arg1 ;
-(id)appIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customDailySnapshotKeyForFamily:(NSInteger)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDetailText;
-(id)localizedKeylineLabelText;
-(void)_addKeysToJSONDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif