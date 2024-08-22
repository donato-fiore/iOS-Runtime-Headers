// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXVIDEOPROCESSINGOPERATIONSPEC_H
#define PXVIDEOPROCESSINGOPERATIONSPEC_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXVideoProcessingOperationSpec : NSObject <NSCopying>



@property (retain, nonatomic) NSURL *debugInfoOutputURL; // ivar: _debugInfoOutputURL
@property (retain, nonatomic) NSURL *inputVideoURL; // ivar: _inputVideoURL
@property (retain, nonatomic) NSURL *outputURL; // ivar: _outputURL


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif