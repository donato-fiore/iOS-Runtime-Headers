// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSSNAPSHOTCACHEITEM_H
#define PKPASSSNAPSHOTCACHEITEM_H


#import <Foundation/Foundation.h>


@interface PKPassSnapshotCacheItem : NSObject {
    *CGImage _image;
    CGFloat _scale;
}




-(id)UIImageFromCache;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif