// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVCAMERAPREVIEWREQUEST_H
#define PVCAMERAPREVIEWREQUEST_H

@class NSDictionary, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface PVCameraPreviewRequest : NSObject

@property (copy, nonatomic) NSDictionary *effectProperties; // ivar: _effectProperties
@property (retain, nonatomic) NSMutableArray *effects; // ivar: _effects
@property (copy, nonatomic) NSArray *metadataObjects; // ivar: _metadataObjects
@property (nonatomic) BOOL mirrored; // ivar: _mirrored
@property (nonatomic) *opaqueCMSampleBuffer sampleBuffer; // ivar: _sampleBuffer
@property (nonatomic) ? time; // ivar: _time


-(void)dealloc;


@end


#endif