// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGDPSTRINGRECORDER_H
#define SGDPSTRINGRECORDER_H

@class _DPStringRecorder, _PASRng;

#import <Foundation/Foundation.h>


@interface SGDPStringRecorder : NSObject {
    _DPStringRecorder *_recorder;
    _PASRng *_rng;
}




-(BOOL)recordString:(id)arg0 ;
-(id)initWithKey:(id)arg0 ;


@end


#endif