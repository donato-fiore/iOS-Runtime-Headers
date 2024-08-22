// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTURESYNCHRONIZEDDATA_H
#define AVCAPTURESYNCHRONIZEDDATA_H


#import <Foundation/Foundation.h>

#import "AVCaptureSynchronizedDataInternal.h"

@interface AVCaptureSynchronizedData : NSObject {
    AVCaptureSynchronizedDataInternal *_synchronizedDataInternal;
}


@property (readonly) ? timestamp;


+(void)initialize;
-(BOOL)hasCorrespondingDepthData;
-(BOOL)hasCorrespondingVisionData;
-(id)_initWithTimestamp:(struct ? )arg0 ;
-(int)constituentDeviceCaptureID;
-(struct ? )adjustedTimestamp;
-(void)dealloc;
-(void)setAdjustedTimestamp:(struct ? )arg0 ;


@end


#endif