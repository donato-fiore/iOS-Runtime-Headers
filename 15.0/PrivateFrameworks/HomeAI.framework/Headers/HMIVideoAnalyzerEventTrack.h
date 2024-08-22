// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOANALYZEREVENTTRACK_H
#define HMIVIDEOANALYZEREVENTTRACK_H

@class HMFObject, NSString, NSArray;
@protocol HMFLogging, NSSecureCoding;



@interface HMIVideoAnalyzerEventTrack : HMFObject <HMFLogging, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSArray *trackedEvents; // ivar: _trackedEvents


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)matchesEventClass:(Class)arg0 ;
-(BOOL)matchesEventClass:(Class)arg0 withConfidence:(float)arg1 ;
-(BOOL)matchesEventClass:(Class)arg0 withConfidenceLevel:(NSInteger)arg1 ;
-(float)intersectionOverMinAreaWithTrackedEvent:(id)arg0 ;
-(float)maxIntersectionOverMinAreaWithTrack:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTrackedEvents:(id)arg0 ;
-(id)shortDescription;
-(struct ? )timeRange;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif