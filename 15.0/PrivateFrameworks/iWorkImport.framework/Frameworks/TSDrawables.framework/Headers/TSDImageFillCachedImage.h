// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDIMAGEFILLCACHEDIMAGE_H
#define TSDIMAGEFILLCACHEDIMAGE_H

@class TSUImage, NSString;
@protocol TSUiOSMemoryWarningFlushable;

#import <Foundation/Foundation.h>


@interface TSDImageFillCachedImage : NSObject <TSUiOSMemoryWarningFlushable>

 {
    id *mHandler;
    TSUImage *mCachedImage;
    os_unfair_lock_s mLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSUImage *image;
@property (readonly) Class superclass;


+(id)cachedImageWithHandler:(id)arg0 ;
-(id)initWithHandler:(id)arg0 ;
-(void)flush;


@end


#endif