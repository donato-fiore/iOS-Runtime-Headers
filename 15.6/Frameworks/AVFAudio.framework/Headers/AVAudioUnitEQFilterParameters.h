// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIOUNITEQFILTERPARAMETERS_H
#define AVAUDIOUNITEQFILTERPARAMETERS_H


#import <Foundation/Foundation.h>


@interface AVAudioUnitEQFilterParameters : NSObject {
    *void _impl;
}


@property (nonatomic) float bandwidth;
@property (nonatomic) BOOL bypass;
@property (nonatomic) NSInteger filterType;
@property (nonatomic) float frequency;
@property (nonatomic) float gain;


-(id)init;
-(id)initWithImpl:(struct AVAudioUnitEQFilterParametersImpl *)arg0 ;
-(void)dealloc;


@end


#endif