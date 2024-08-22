// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPLACEHOLDERTHUMBNAILMANAGER_H
#define PLPLACEHOLDERTHUMBNAILMANAGER_H

@class NSCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLPlaceholderThumbnailManager : NSObject {
    NSCache *_placeholderDataCache;
    NSCache *_placeholderImageCache;
    NSObject<OS_dispatch_queue> *_isolation;
}




+(id)sharedManager;
-(id)_cacheKeyForFormat:(id)arg0 photoImageSize:(struct CGSize )arg1 photoImageColor:(id)arg2 ;
-(id)_placeholderImageWithColor:(id)arg0 ;
-(id)init;
-(id)newPlaceholderImageForFormat:(unsigned short)arg0 photoImageSize:(struct CGSize )arg1 ;
-(id)placeholderDataForFormat:(unsigned short)arg0 photoImageSize:(struct CGSize )arg1 width:(*int)arg2 height:(*int)arg3 bytesPerRow:(*int)arg4 dataWidth:(*int)arg5 dataHeight:(*int)arg6 imageDataOffset:(*int)arg7 ;


@end


#endif