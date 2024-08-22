// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOANALYZERDYNAMICCONFIGURATION_H
#define HMIVIDEOANALYZERDYNAMICCONFIGURATION_H

@class HMFObject, NSArray, NSString;
@protocol HMFLogging, NSSecureCoding;



@interface HMIVideoAnalyzerDynamicConfiguration : HMFObject <HMFLogging, NSSecureCoding>



@property (retain) NSArray *activityZones; // ivar: _activityZones
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSInteger eventTriggers; // ivar: _eventTriggers
@property (readonly) NSUInteger hash;
@property BOOL recognizeFaces; // ivar: _recognizeFaces
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif