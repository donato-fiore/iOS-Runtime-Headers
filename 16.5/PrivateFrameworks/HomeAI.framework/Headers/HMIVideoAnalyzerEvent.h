// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOANALYZEREVENT_H
#define HMIVIDEOANALYZEREVENT_H

@class HMFObject, NSArray, NSString, NSDictionary;
@protocol HMFLogging, NSSecureCoding;


#import "HMIConfidence.h"

@interface HMIVideoAnalyzerEvent : HMFObject <HMFLogging, NSSecureCoding>



@property (readonly) NSArray *allEvents;
@property (readonly) CGRect boundingBox; // ivar: _boundingBox
@property (readonly) HMIConfidence *confidence; // ivar: _confidence
@property (readonly) NSInteger confidenceLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(Class)eventClassForShortName:(id)arg0 ;
+(id)defaultConfidenceThreshold:(Class)arg0 confidenceLevel:(NSInteger)arg1 ;
+(id)defaultConfidenceThresholdsFeedback;
+(id)defaultConfidenceThresholdsHigh;
+(id)defaultConfidenceThresholdsMedium;
+(id)eventClasses;
+(id)eventClassesArray;
+(id)eventConfidenceThresholdsHigh;
+(id)eventConfidenceThresholdsMedium;
+(id)eventsWithContentsOfFile:(id)arg0 ;
+(id)logCategory;
+(id)rgbColorCodeForEventClass:(Class)arg0 ;
+(id)shortNameForEventClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfidence:(id)arg0 boundingBox:(struct CGRect )arg1 ;
-(id)initWithConfidence:(id)arg0 boundingBox:(struct CGRect )arg1 userInfo:(id)arg2 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif