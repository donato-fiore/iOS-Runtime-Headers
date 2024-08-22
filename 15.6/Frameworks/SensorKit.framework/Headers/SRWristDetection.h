// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRWRISTDETECTION_H
#define SRWRISTDETECTION_H

@class NSString;
@protocol SRSampleExporting, NSSecureCoding, SRSampling;

#import <Foundation/Foundation.h>


@interface SRWristDetection : NSObject <SRSampleExporting, NSSecureCoding, SRSampling>



@property CGFloat cfOffWristDate; // ivar: _cfOffWristDate
@property CGFloat cfOnWristDate; // ivar: _cfOnWristDate
@property NSInteger crownOrientation; // ivar: _crownOrientation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL onWrist; // ivar: _onWrist
@property (readonly) Class superclass;
@property NSInteger wristLocation; // ivar: _wristLocation


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(id)_offWristDate;
-(id)binarySampleRepresentation;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCFOnWristDate:(CGFloat)arg0 CFOffWristDate:(CGFloat)arg1 onWrist:(BOOL)arg2 wristLocation:(NSInteger)arg3 crownOrientation:(NSInteger)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOnWristDate:(id)arg0 offWristDate:(id)arg1 onWrist:(BOOL)arg2 wristLocation:(NSInteger)arg3 crownOrientation:(NSInteger)arg4 ;
-(id)sr_dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif