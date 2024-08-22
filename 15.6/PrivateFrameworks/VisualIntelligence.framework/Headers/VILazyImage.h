// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VILAZYIMAGE_H
#define VILAZYIMAGE_H

@class NSString;
@protocol VIImageContent;

#import <Foundation/Foundation.h>

#import "VIImage.h"

@interface VILazyImage : NSObject <VIImageContent>

 {
    os_unfair_lock_s _lock;
    VIImage *_image;
    id *_loader;
    CGSize _knownImageSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, nonatomic) *__CVBuffer pixelBuffer;
@property (readonly) Class superclass;


-(BOOL)isLoaded;
-(id)_image;
-(id)initWithImageLoader:(id)arg0 ;
// -(id)initWithImageLoader:(id)arg0 imageSize:(unk)arg1  ;
-(struct CGSize )imageSize;
-(void)_loadImageIfPossible;
-(void)dealloc;


@end


#endif