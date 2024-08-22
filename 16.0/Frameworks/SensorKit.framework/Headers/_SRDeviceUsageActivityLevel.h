// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SRDEVICEUSAGEACTIVITYLEVEL_H
#define _SRDEVICEUSAGEACTIVITYLEVEL_H

@class NSString;
@protocol SRSampleExporting, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SRDeviceUsageActivityLevel : NSObject <SRSampleExporting, NSSecureCoding>



@property NSInteger activityLevel; // ivar: _activityLevel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)activityLevelWithLevel:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sr_dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif