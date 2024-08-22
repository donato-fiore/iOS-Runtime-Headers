// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUPASSCODECODECCAPABILITY_H
#define AUPASSCODECODECCAPABILITY_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AUPasscodeCodecCapability : NSObject

@property (readonly, copy, nonatomic) NSString *algorithmName; // ivar: _algorithmName
@property (readonly, nonatomic) _NSRange numChannelRange; // ivar: _numChannelRange
@property (readonly, nonatomic) NSArray *supportedSampleRates; // ivar: _supportedSampleRates


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPasscodeCodecCapability:(id)arg0 ;
-(id)init;
-(id)initWithAlgorithmName:(id)arg0 ;


@end


#endif