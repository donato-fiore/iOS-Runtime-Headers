// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPHOTOPICKERPROGRESSITEM_H
#define MFPHOTOPICKERPROGRESSITEM_H

@class AVAssetExportSession;

#import <Foundation/Foundation.h>


@interface MFPhotoPickerProgressItem : NSObject

@property (retain, nonatomic) AVAssetExportSession *exportSession; // ivar: _exportSession
@property (nonatomic) int imageRequestID; // ivar: _imageRequestID
@property (nonatomic) CGFloat progress; // ivar: _progress


-(id)description;


@end


#endif