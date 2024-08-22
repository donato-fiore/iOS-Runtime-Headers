// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERACLIPIMPORTMETADATA_H
#define HMDCAMERACLIPIMPORTMETADATA_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface HMDCameraClipImportMetadata : NSObject

@property (readonly) NSArray *posterFrames; // ivar: _posterFrames
@property (readonly) NSDate *startDate; // ivar: _startDate
@property (readonly) CGFloat targetFragmentDuration; // ivar: _targetFragmentDuration
@property (readonly) NSArray *videoSegments; // ivar: _videoSegments


-(id)initClipData:(id)arg0 ;


@end


#endif