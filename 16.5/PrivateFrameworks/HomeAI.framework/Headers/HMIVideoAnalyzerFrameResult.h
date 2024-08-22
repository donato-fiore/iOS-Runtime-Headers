// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOANALYZERFRAMERESULT_H
#define HMIVIDEOANALYZERFRAMERESULT_H

@class HMFObject, NSString, NSSet;
@protocol HMIVideoEvent, HMFLogging, NSSecureCoding;


#import "HMIVideoFrame.h"

@interface HMIVideoAnalyzerFrameResult : HMFObject <HMIVideoEvent, HMFLogging, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *events; // ivar: _events
@property (readonly) HMIVideoFrame *frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (readonly) CGRect regionOfInterest; // ivar: _regionOfInterest
@property (readonly) Class superclass;
@property (readonly) ? time;


+(BOOL)supportsSecureCoding;
+(id)combineFrameResults:(id)arg0 withResults:(id)arg1 ;
+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(id)arg0 events:(id)arg1 ;
-(id)initWithFrame:(id)arg0 events:(id)arg1 regionOfInterest:(struct CGRect )arg2 ;
-(id)maxConfidenceEventForEventClass:(Class)arg0 ;
-(id)maxConfidenceEvents;
-(id)redactedCopy;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif