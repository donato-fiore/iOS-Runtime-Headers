// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKDATECOMPLICATION_H
#define NTKDATECOMPLICATION_H



#import "NTKComplication.h"

@interface NTKDateComplication : NTKComplication

@property (readonly, nonatomic) NSUInteger dateStyle; // ivar: _dateStyle


+(BOOL)supportsSecureCoding;
+(id)complicationWithDateStyle:(NSUInteger)arg0 ;
-(BOOL)appearsInDailySnapshotForFamily:(NSInteger)arg0 ;
-(BOOL)snapshotContext:(id)arg0 isStaleRelativeToContext:(id)arg1 ;
-(NSUInteger)hash;
-(id)_generateUniqueIdentifier;
-(id)_initWithComplicationType:(NSUInteger)arg0 JSONDictionary:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customDailySnapshotKeyForFamily:(NSInteger)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComplicationType:(NSUInteger)arg0 ;
-(id)ntk_localizedNameWithOptions:(NSUInteger)arg0 forRichComplicationSlot:(BOOL)arg1 ;
-(id)ntk_sectionIdentifier;
-(void)_addKeysToJSONDictionary:(id)arg0 ;
-(void)_migrateFromSkiHillWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif