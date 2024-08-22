// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAUDIOPOWERSPECTRUMBIN_H
#define AVCAUDIOPOWERSPECTRUMBIN_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVCAudioPowerSpectrumBin : NSObject <NSSecureCoding>



@property (readonly, nonatomic) float maxFrequency; // ivar: _maxFrequency
@property (readonly, nonatomic) float minFrequency; // ivar: _minFrequency
@property (readonly, nonatomic) float powerLevel; // ivar: _powerLevel


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)assign:(struct _VCAudioPowerSpectrumEntry *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif