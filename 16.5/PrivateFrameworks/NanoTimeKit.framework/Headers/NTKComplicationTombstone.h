// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCOMPLICATIONTOMBSTONE_H
#define NTKCOMPLICATIONTOMBSTONE_H



#import "NTKComplication.h"

@interface NTKComplicationTombstone : NTKComplication

@property (readonly, nonatomic) NTKComplication *complication; // ivar: _complication


+(BOOL)supportsSecureCoding;
+(id)tombstoneWithComplication:(id)arg0 ;
-(BOOL)supportsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)_generateUniqueIdentifier;
-(id)_migrateToFamily:(NSInteger)arg0 withAllowedComplications:(id)arg1 ;
-(id)appIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_addKeysToJSONDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif