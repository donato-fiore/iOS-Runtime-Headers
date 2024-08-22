// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAUDIOPOWERSPECTRUM_H
#define AVCAUDIOPOWERSPECTRUM_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVCAudioPowerSpectrum : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *channels; // ivar: _channels
@property (readonly, nonatomic) float maxFrequency; // ivar: _maxFrequency
@property (readonly, nonatomic) float minFrequency; // ivar: _minFrequency
@property (readonly, nonatomic) NSInteger sourceType; // ivar: _sourceType


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)applyChannelBins:(struct _VCAudioPowerSpectrumEntry *)arg0 binCount:(unsigned int)arg1 channelID:(unsigned short)arg2 ;
-(void)checkNumChannels:(unsigned short)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif