// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAUDIOPOWERSPECTRUMCHANNEL_H
#define AVCAUDIOPOWERSPECTRUMCHANNEL_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVCAudioPowerSpectrumChannel : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *bins; // ivar: _bins


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)applyChannelBins:(struct _VCAudioPowerSpectrumEntry *)arg0 binCount:(unsigned int)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif