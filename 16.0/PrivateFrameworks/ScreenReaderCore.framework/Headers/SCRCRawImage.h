// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCRCRAWIMAGE_H
#define SCRCRAWIMAGE_H


#import <Foundation/Foundation.h>


@interface SCRCRawImage : NSObject

@property (nonatomic) NSInteger bytesPerPixel; // ivar: _bytesPerPixel
@property (nonatomic) char * data; // ivar: _data
@property (nonatomic) NSInteger height; // ivar: _height
@property (retain, nonatomic) *CGImage imageRef; // ivar: _imageRef
@property (nonatomic) NSInteger width; // ivar: _width


+(id)rawImageForImage:(struct CGImage *)arg0 ;
-(void)dealloc;


@end


#endif