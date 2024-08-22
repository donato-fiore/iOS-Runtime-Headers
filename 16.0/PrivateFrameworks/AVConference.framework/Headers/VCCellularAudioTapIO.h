// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCCELLULARAUDIOTAPIO_H
#define VCCELLULARAUDIOTAPIO_H


#import <Foundation/Foundation.h>

#import "VCAudioIO.h"
#import "VCAudioPowerSpectrumSource.h"

@interface VCCellularAudioTapIO : NSObject {
    ? _realtimeContext;
}


@property (retain, nonatomic) VCAudioIO *audioIO; // ivar: _audioIO
@property (readonly, nonatomic) VCAudioPowerSpectrumSource *powerSpectrumSource; // ivar: _powerSpectrumSource
@property (readonly, nonatomic) *tagVCCellularAudioTapIORealtimeContext realtimeContext;
@property (readonly, nonatomic) NSInteger streamToken;


-(id)initWithStreamToken:(NSInteger)arg0 powerSpectrumSource:(id)arg1 ;
-(void)dealloc;


@end


#endif