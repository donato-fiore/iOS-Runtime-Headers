// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUIMAGECIPROVIDER_H
#define _NUIMAGECIPROVIDER_H

@protocol NUBufferImage;

#import <Foundation/Foundation.h>


@interface _NUImageCIProvider : NSObject {
    id<NUBufferImage> *_image;
}




-(id)initWithImage:(id)arg0 ;
-(void)dealloc;
-(void)provideImageData:(*void)arg0 bytesPerRow:(NSUInteger)arg1 origin:(NSUInteger)arg2 size:(NSUInteger)arg4 userInfo:(id)arg6 ;


@end


#endif