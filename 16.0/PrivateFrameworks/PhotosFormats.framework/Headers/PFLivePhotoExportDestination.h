// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFLIVEPHOTOEXPORTDESTINATION_H
#define PFLIVEPHOTOEXPORTDESTINATION_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface PFLivePhotoExportDestination : NSObject

@property (readonly) NSURL *photoURL; // ivar: _photoURL
@property (readonly) NSURL *videoURL; // ivar: _videoURL


+(id)destinationWithPhotoURL:(id)arg0 videoURL:(id)arg1 ;
-(id)initWithPhotoURL:(id)arg0 videoURL:(id)arg1 ;


@end


#endif