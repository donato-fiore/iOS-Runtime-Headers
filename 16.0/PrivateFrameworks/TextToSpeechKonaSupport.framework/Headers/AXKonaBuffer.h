// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXKONABUFFER_H
#define AXKONABUFFER_H

@class AVAudioPCMBuffer, NSArray;

#import <Foundation/Foundation.h>


@interface AXKonaBuffer : NSObject

@property (retain, nonatomic) AVAudioPCMBuffer *buffer; // ivar: _buffer
@property (retain, nonatomic) NSArray *markers; // ivar: _markers




@end


#endif