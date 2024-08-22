// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOANALYZERFRAGMENTRESULT_H
#define HMIVIDEOANALYZERFRAGMENTRESULT_H

@class HMFObject, NSString, NSSet, NSArray;
@protocol HMFLogging, NSSecureCoding;


#import "HMIVideoAnalyzerDynamicConfiguration.h"
#import "HMIVideoFragment.h"
#import "HMIVideoAnalyzerResultOutcome.h"

@interface HMIVideoAnalyzerFragmentResult : HMFObject <HMFLogging, NSSecureCoding>



@property (readonly) HMIVideoAnalyzerDynamicConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *events; // ivar: _events
@property (readonly) HMIVideoFragment *fragment; // ivar: _fragment
@property (readonly) NSArray *frameResults; // ivar: _frameResults
@property (readonly) NSUInteger hash;
@property (readonly) HMIVideoAnalyzerResultOutcome *outcome; // ivar: _outcome
@property (readonly) Class superclass;
@property (readonly) NSArray *thumbnails; // ivar: _thumbnails


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFragment:(id)arg0 events:(id)arg1 frameResults:(id)arg2 thumbnails:(id)arg3 configuration:(id)arg4 outcome:(id)arg5 ;
-(id)maxConfidenceEventForEventClass:(Class)arg0 ;
-(id)maxConfidenceEvents;
-(id)redactedCopyWithFrameResults:(BOOL)arg0 fragment:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif