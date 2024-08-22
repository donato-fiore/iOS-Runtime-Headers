// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSAMPLEBUFFERGENERATORINTERNAL_H
#define AVSAMPLEBUFFERGENERATORINTERNAL_H


#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVSampleBufferGeneratorInternal : NSObject {
    *OpaqueFigSampleGenerator figSampleGenerator;
    AVWeakReference *weakReferenceToAsset;
    *OpaqueCMTimebase timebase;
}






@end


#endif