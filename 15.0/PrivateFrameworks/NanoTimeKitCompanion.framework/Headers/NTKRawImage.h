// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRAWIMAGE_H
#define NTKRAWIMAGE_H


#import <Foundation/Foundation.h>


@interface NTKRawImage : NSObject

@property (readonly, nonatomic) *float contents; // ivar: _contents
@property (readonly, nonatomic) int height; // ivar: _height
@property (readonly, nonatomic) int width; // ivar: _width


+(id)rawImageWithImage:(id)arg0 width:(int)arg1 height:(int)arg2 ;
-(id)initWithContent:(*int)arg0 width:(int)arg1 height;
-(id)scaleToWidth:(int)arg0 height:(int)arg1 ;
-(void)dealloc;
-(void)write:(id)arg0 ;


@end


#endif