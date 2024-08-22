// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECHOCODECCAPABILITY_H
#define ECHOCODECCAPABILITY_H

@class NSArray;
@protocol NSSecureCoding;


#import "AUPasscodeCodecCapability.h"

@interface EchoCodecCapability : AUPasscodeCodecCapability <NSSecureCoding>



@property (readonly, nonatomic) NSArray *algorithmVersionNumbers; // ivar: _algorithmVersionNumbers
@property (readonly, nonatomic) _NSRange frameSizeRange; // ivar: _frameSizeRange
@property (readonly, nonatomic) _NSRange hpfCutOffFreqRange; // ivar: _hpfCutOffFreqRange
@property (readonly, nonatomic) _NSRange numFrameRepeatRange; // ivar: _numFrameRepeatRange


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEchoCodecCapability:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif