// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFPARALLAXLAYER_H
#define PFPARALLAXLAYER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PFParallaxLayer : NSObject

@property (readonly, nonatomic) CGRect frame; // ivar: _frame
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) *__CVBuffer image; // ivar: _image
@property (readonly, nonatomic) BOOL isBackfill;
@property (readonly, nonatomic) BOOL isBackground;
@property (readonly, nonatomic) BOOL isDebug;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly, nonatomic) BOOL isInactive;
@property (readonly, nonatomic) CGSize pixelSize;
@property (readonly, nonatomic) CGFloat zPosition; // ivar: _zPosition


+(id)imageLayer:(struct __CVBuffer *)arg0 frame:(struct CGRect )arg1 zPosition:(CGFloat)arg2 identifier:(id)arg3 ;
-(id)debugDescription;
-(id)description;
-(id)initWithImage:(struct __CVBuffer *)arg0 frame:(struct CGRect )arg1 zPosition:(CGFloat)arg2 identifier:(id)arg3 ;
-(void)dealloc;


@end


#endif