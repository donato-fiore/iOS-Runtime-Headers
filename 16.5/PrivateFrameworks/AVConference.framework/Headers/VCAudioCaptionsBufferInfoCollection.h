// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOCAPTIONSBUFFERINFOCOLLECTION_H
#define VCAUDIOCAPTIONSBUFFERINFOCOLLECTION_H

@class NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCAudioCaptionsBufferInfoCollection : NSObject {
    NSMutableArray *_bufferInfos;
    CGFloat _bufferLength;
    NSObject<OS_dispatch_queue> *_stateQueue;
}


@property (readonly, nonatomic) NSArray *streamTokens;


-(id)description;
-(id)initWithBufferLength:(CGFloat)arg0 ;
-(void)dealloc;


@end


#endif