// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONCRETEAUDIOASSETENTRYPOINT_H
#define PXCONCRETEAUDIOASSETENTRYPOINT_H

@class NSString, NSArray;
@protocol PXAudioAssetEntryPoint;

#import <Foundation/Foundation.h>


@interface PXConcreteAudioAssetEntryPoint : NSObject <PXAudioAssetEntryPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *fadeInKeyGainValues; // ivar: _fadeInKeyGainValues
@property (readonly, copy, nonatomic) NSArray *fadeInKeyTimeOffsets; // ivar: _fadeInKeyTimeOffsets
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat time; // ivar: _time


-(BOOL)isEqual:(id)arg0 ;
-(float)fadeInGainAtOffset:(CGFloat)arg0 ;
-(id)initWithTime:(CGFloat)arg0 fadeInKeyTimeOffsets:(id)arg1 fadeInKeyGainValues:(id)arg2 ;


@end


#endif