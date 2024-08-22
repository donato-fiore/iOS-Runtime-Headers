// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCAMERAIMAGECACHE_H
#define HFCAMERAIMAGECACHE_H

@class BSUIMappedImageCache;

#import <Foundation/Foundation.h>


@interface HFCameraImageCache : NSObject

@property (retain, nonatomic) BSUIMappedImageCache *imageCache; // ivar: _imageCache


+(id)faceCropKeyForPersonName:(id)arg0 ;
+(id)heroFrameKeyForCameraClipIdentifierString:(id)arg0 ;
+(id)keyForCameraClipIdentifierString:(id)arg0 withOffset:(float)arg1 ;
+(id)personNameForFaceCropKey:(id)arg0 ;
+(id)posterFrameKeyForCameraClipIdentifierString:(id)arg0 withOffset:(float)arg1 ;
-(id)imageForCameraClipIdentifierString:(id)arg0 withOffset:(float)arg1 ;
-(id)imageForKey:(id)arg0 ;
-(id)init;
-(id)initWithUniqueIdentifier:(id)arg0 ;
-(void)addImage:(id)arg0 forKey:(id)arg1 ;
-(void)purgeAllImages;


@end


#endif