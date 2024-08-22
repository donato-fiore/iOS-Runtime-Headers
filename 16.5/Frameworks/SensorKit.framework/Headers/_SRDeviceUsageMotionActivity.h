// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SRDEVICEUSAGEMOTIONACTIVITY_H
#define _SRDEVICEUSAGEMOTIONACTIVITY_H

@class NSString;
@protocol SRSampleExporting, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SRDeviceUsageMotionActivity : NSObject <SRSampleExporting, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property NSInteger motionActivityType; // ivar: _motionActivityType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)motionActivityWithActivityType:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sr_dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif