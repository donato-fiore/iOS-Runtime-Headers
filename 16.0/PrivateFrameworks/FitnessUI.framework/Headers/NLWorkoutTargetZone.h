// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLWORKOUTTARGETZONE_H
#define NLWORKOUTTARGETZONE_H


#import <Foundation/Foundation.h>


@interface NLWorkoutTargetZone : NSObject

@property (readonly, nonatomic) CGFloat currentValue; // ivar: _currentValue
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) CGFloat max; // ivar: _max
@property (readonly, nonatomic) CGFloat min; // ivar: _min
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(NSInteger)mapTargetZoneTypeStringToEnum:(id)arg0 ;
+(NSInteger)targetZoneMasterTypeForTargetZoneType:(NSInteger)arg0 ;
+(id)cadenceTargetZoneForActivityType:(id)arg0 ;
+(id)defaultTargetZoneForTypeKey:(id)arg0 ;
+(id)mapTargetZoneTypeEnumToString:(NSInteger)arg0 ;
+(id)metadataForTargetZone:(id)arg0 ;
+(id)paceTargetZoneForActivityType:(id)arg0 ;
+(id)powerTargetZoneForActivityType:(id)arg0 ;
+(id)restoreFromDictionary:(id)arg0 ;
+(id)restoreFromDictionary:(id)arg0 activityType:(id)arg1 ;
+(id)serializeTargetZone:(id)arg0 ;
+(id)targetZoneForActivityType:(id)arg0 targetZoneActivityTypeKey:(id)arg1 ;
+(id)targetZonesFromMetadata:(id)arg0 ;
+(void)saveTargetZone:(id)arg0 forActivityType:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSingleThreshold;
-(NSUInteger)hash;
-(NSUInteger)stateForDistanceUnit:(id)arg0 ;
-(NSUInteger)stateForPaceZoneWithDistanceUnit:(id)arg0 ;
-(NSUInteger)stateForStandardZone;
-(id)description;
-(id)initWithType:(NSInteger)arg0 min:(CGFloat)arg1 max:(CGFloat)arg2 currentValue:(CGFloat)arg3 ;


@end


#endif