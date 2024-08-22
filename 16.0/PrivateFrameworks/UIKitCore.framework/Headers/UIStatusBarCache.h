// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARCACHE_H
#define UISTATUSBARCACHE_H

@class CPBitmapStore;

#import <Foundation/Foundation.h>


@interface UIStatusBarCache : NSObject {
    CPBitmapStore *_store;
}


@property (readonly, nonatomic, getter=isWriteable) BOOL writeable; // ivar: _writeable


+(id)sharedInstance;
-(id)imageNamed:(id)arg0 forGroup:(id)arg1 withScale:(CGFloat)arg2 ;
-(id)init;
-(void)cacheImage:(id)arg0 named:(id)arg1 forGroup:(id)arg2 ;
-(void)removeImagesInGroup:(id)arg0 ;


@end


#endif