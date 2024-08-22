// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUWAVEFORMSLICE_H
#define HUWAVEFORMSLICE_H

@class CALayer;

#import <Foundation/Foundation.h>


@interface HUWaveformSlice : NSObject

@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (nonatomic) CGRect layerFrame; // ivar: _layerFrame
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (retain, nonatomic) CALayer *waveformlayer; // ivar: _waveformlayer


-(void)dealloc;


@end


#endif