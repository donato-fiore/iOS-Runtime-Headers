// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRDELETIONRECORD_H
#define SRDELETIONRECORD_H

@class NSString;
@protocol SRSampleExporting, SRSampling, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SRDeletionRecord : NSObject <SRSampleExporting, SRSampling, NSSecureCoding>

 {
    uint8_t _reason;
}


@property (copy) NSString *_originatingDeviceIdentifier; // ivar: __originatingDeviceIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat endTime; // ivar: _endTime
@property NSInteger extendedReason; // ivar: _extendedReason
@property (readonly) NSUInteger hash;
@property NSInteger reason;
@property CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)tombstoneWithStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 extendedReason:(NSInteger)arg2 ;
+(id)tombstoneWithStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 extendedReason:(NSInteger)arg2 originatingDeviceIdentifier:(id)arg3 ;
+(id)tombstoneWithStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 reason:(NSInteger)arg2 ;
+(id)tombstoneWithStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 reason:(NSInteger)arg2 originatingDeviceIdentifier:(id)arg3 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(id)binarySampleRepresentation;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sr_dictionaryRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif