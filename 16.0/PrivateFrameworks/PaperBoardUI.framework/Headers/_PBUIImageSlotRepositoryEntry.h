// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PBUIIMAGESLOTREPOSITORYENTRY_H
#define _PBUIIMAGESLOTREPOSITORYENTRY_H

@class IOSurface, UIImage, NSURL;

#import <Foundation/Foundation.h>


@interface _PBUIImageSlotRepositoryEntry : NSObject {
    *CGImageBlockSet _blockSet;
    IOSurface *_ioSurface;
}


@property (nonatomic) NSInteger actualStyle; // ivar: _actualStyle
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) IOSurface *ioSurface;
@property (nonatomic) CGSize size; // ivar: _size
@property (copy, nonatomic) NSURL *url; // ivar: _url


-(void)_setBlockSet:(struct CGImageBlockSet *)arg0 ;
-(void)dealloc;


@end


#endif