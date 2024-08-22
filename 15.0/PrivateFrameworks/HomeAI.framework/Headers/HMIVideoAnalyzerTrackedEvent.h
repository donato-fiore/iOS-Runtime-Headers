// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOANALYZERTRACKEDEVENT_H
#define HMIVIDEOANALYZERTRACKEDEVENT_H

@class HMFObject, NSString;
@protocol HMFLogging, NSSecureCoding;


#import "HMIVideoAnalyzerEvent.h"

@interface HMIVideoAnalyzerTrackedEvent : HMFObject <HMFLogging, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMIVideoAnalyzerEvent *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) ? timeRange; // ivar: _timeRange


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(id)arg0 timeRange:(struct ? )arg1 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif