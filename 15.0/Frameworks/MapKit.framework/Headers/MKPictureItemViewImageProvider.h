// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPICTUREITEMVIEWIMAGEPROVIDER_H
#define MKPICTUREITEMVIEWIMAGEPROVIDER_H

@class NSCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MKPictureItemViewImageProvider : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *blurQueue; // ivar: _blurQueue
@property (retain, nonatomic) NSCache *blurredImagesCache; // ivar: _blurredImagesCache


+(id)sharedInstance;
-(id)init;
-(void)blurredImage:(id)arg0 displaySize:(struct CGSize )arg1 completion:(id)arg2 ;
-(void)imageWithURL:(id)arg0 displaySize:(struct CGSize )arg1 completion:(id)arg2 ;


@end


#endif