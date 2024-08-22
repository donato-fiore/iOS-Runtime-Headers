// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCPACKETFILTER_H
#define AVCPACKETFILTER_H


#import <Foundation/Foundation.h>


@interface AVCPacketFilter : NSObject

@property (readonly) BOOL isRTPFilter; // ivar: _isRTPFilter


-(BOOL)isMatchedPacket:(*void)arg0 size:(int)arg1 ;


@end


#endif