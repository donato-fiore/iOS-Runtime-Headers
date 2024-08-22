// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLLIVEPHOTOEDITSOURCE_H
#define PLLIVEPHOTOEDITSOURCE_H



#import "PLEditSource.h"
#import "PLVideoEditSource.h"

@interface PLLivePhotoEditSource : PLEditSource

@property (readonly, nonatomic) PLEditSource *photoEditSource; // ivar: _photoEditSource
@property (readonly, nonatomic) PLVideoEditSource *videoEditSource; // ivar: _videoEditSource


+(id)livePhotoSourceWithPhotoURL:(id)arg0 videoComplementURL:(id)arg1 ;
-(id)_initWithPhotoSource:(id)arg0 videoComplement:(id)arg1 ;
-(id)initWithPhotoSource:(id)arg0 videoComplement:(id)arg1 ;
-(id)initWithSubstandardPhotoSource:(id)arg0 videoComplement:(id)arg1 ;


@end


#endif