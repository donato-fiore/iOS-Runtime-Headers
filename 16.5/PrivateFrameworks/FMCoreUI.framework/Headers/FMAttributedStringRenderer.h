// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMATTRIBUTEDSTRINGRENDERER_H
#define FMATTRIBUTEDSTRINGRENDERER_H


#import <Foundation/Foundation.h>

#import "FMAttributedStringRendererOptions.h"

@interface FMAttributedStringRenderer : NSObject

@property (readonly, nonatomic) FMAttributedStringRendererOptions *options; // ivar: _options


-(id)_imageFromTextStorage:(id)arg0 width:(CGFloat)arg1 showExclusionPaths:(BOOL)arg2 ;
-(id)_textStorageForAttributedString:(id)arg0 width:(CGFloat)arg1 options:(id)arg2 ;
-(id)imageForAttributedString:(id)arg0 width:(CGFloat)arg1 ;
-(id)imageForAttributedString:(id)arg0 width:(CGFloat)arg1 options:(id)arg2 ;
-(id)imageForAttributedString:(id)arg0 width:(CGFloat)arg1 showExclusionPaths:(BOOL)arg2 options:(id)arg3 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(struct CGSize )_sizeFromTextStorage:(id)arg0 ;


@end


#endif