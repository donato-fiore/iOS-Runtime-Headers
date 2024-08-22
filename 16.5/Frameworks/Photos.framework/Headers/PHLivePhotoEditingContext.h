// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHLIVEPHOTOEDITINGCONTEXT_H
#define PHLIVEPHOTOEDITINGCONTEXT_H

@class PFLivePhotoEditSession, CIImage;

#import <Foundation/Foundation.h>


@interface PHLivePhotoEditingContext : NSObject {
    PFLivePhotoEditSession *_editSession;
}


@property float audioVolume;
@property (readonly) ? duration;
@property (copy) id *frameProcessor;
@property (readonly) CIImage *fullSizeImage;
@property (readonly) unsigned int orientation;
@property (readonly) ? photoTime;


+(id)errorWithUnderlyingError:(id)arg0 ;
-(id)init;
-(id)initWithLivePhotoEditingInput:(id)arg0 ;
-(void)cancel;
-(void)prepareLivePhotoForPlaybackWithTargetSize:(struct CGSize )arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)saveLivePhotoToOutput:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif