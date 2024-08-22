// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIOCONVERTER_H
#define AVAUDIOCONVERTER_H

@class NSArray, NSString, NSData;

#import <Foundation/Foundation.h>

#import "AVAudioFormat.h"

@interface AVAudioConverter : NSObject {
    *void _impl;
}


@property (readonly, nonatomic) NSArray *applicableEncodeBitRates;
@property (readonly, nonatomic) NSArray *applicableEncodeSampleRates;
@property (readonly, nonatomic) NSArray *availableEncodeBitRates;
@property (readonly, nonatomic) NSArray *availableEncodeChannelLayoutTags;
@property (readonly, nonatomic) NSArray *availableEncodeSampleRates;
@property (nonatomic) NSInteger bitRate;
@property (retain, nonatomic) NSString *bitRateStrategy;
@property (retain, nonatomic) NSArray *channelMap;
@property (nonatomic) BOOL dither;
@property (nonatomic) BOOL downmix;
@property (readonly, nonatomic) AVAudioFormat *inputFormat;
@property (retain, nonatomic) NSData *magicCookie;
@property (readonly, nonatomic) NSInteger maximumOutputPacketSize;
@property (readonly, nonatomic) AVAudioFormat *outputFormat;
@property (nonatomic) AVAudioConverterPrimeInfo primeInfo;
@property (nonatomic) NSInteger primeMethod;
@property (retain, nonatomic) NSString *sampleRateConverterAlgorithm;
@property (nonatomic) NSInteger sampleRateConverterQuality;


-(BOOL)convertToBuffer:(id)arg0 fromBuffer:(id)arg1 error:(*id)arg2 ;
-(NSInteger)convertToBuffer:(id)arg0 error:(*id)arg1 withInputFromBlock:(id)arg2 ;
-(id)initFromFormat:(id)arg0 toFormat:(id)arg1 ;
-(void)dealloc;
-(void)reset;


@end


#endif