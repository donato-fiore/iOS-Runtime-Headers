// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREVIDEOTHUMBNAILOUTPUTINTERNAL_H
#define AVCAPTUREVIDEOTHUMBNAILOUTPUTINTERNAL_H

@class AVWeakReference, NSArray;

#import <Foundation/Foundation.h>


@interface AVCaptureVideoThumbnailOutputInternal : NSObject {
    AVWeakReference *weakReference;
    AVWeakReference *delegateWeakReference;
    BOOL didPropagateContents;
    NSArray *filters;
    CGSize thumbnailSize;
}




-(id)init;
-(void)dealloc;


@end


#endif