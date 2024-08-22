// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMICAMERAACTIVITYZONE_H
#define HMICAMERAACTIVITYZONE_H

@class HMFObject, NSString, NSArray;
@protocol NSSecureCoding, HMFLogging;



@interface HMICameraActivityZone : HMFObject <NSSecureCoding, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isInclusion) BOOL inclusion; // ivar: _inclusion
@property (readonly, copy) NSArray *points; // ivar: _points
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)activityZonesFromString:(id)arg0 isInclusion:(BOOL)arg1 ;
+(id)filterEvents:(id)arg0 withActivityZones:(id)arg1 motionDetection:(id)arg2 insetPercentageInclusion:(float)arg3 insetPercentageExclusion:(float)arg4 ;
+(id)logCategory;
+(void)generateAndSubmitStats:(id)arg0 filteredEvents:(id)arg1 motionDetection:(id)arg2 activityZones:(id)arg3 ;
+(void)submitCoreAnalyticsEvent:(id)arg0 filteringLevel:(id)arg1 numberOfDetectedObjects:(id)arg2 ;
+(void)submitCoreAnalyticsEventForActivityZones:(id)arg0 motionScore:(float)arg1 ;
-(BOOL)checkIfObjectIsStaticWithBoundingBox:(struct CGRect )arg0 motionDetection:(id)arg1 eventClass:(Class)arg2 ;
-(BOOL)containsEvent:(id)arg0 withInsetPercentage:(float)arg1 ;
-(BOOL)containsVectorWithSource:(struct CGPoint )arg0 destination:(struct CGPoint )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)overlapsWithElipseInsideRect:(struct CGRect )arg0 ;
-(BOOL)overlapsWithElipseInsideRect:(struct CGRect )arg0 withInsetPercentage:(float)arg1 ;
-(BOOL)saveToJsonActivityZones:(id)arg0 motionDetection:(id)arg1 videoFragmentUrl:(id)arg2 frameId:(id)arg3 UUID:(id)arg4 detectionID:(id)arg5 zoneID:(id)arg6 ;
-(NSUInteger)activityZoneType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPoints:(id)arg0 ;
-(id)initWithPoints:(id)arg0 isInclusion:(BOOL)arg1 ;
-(id)jsonReperesentaionOfDetectedObject:(id)arg0 motionDetection:(id)arg1 eventClass:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif