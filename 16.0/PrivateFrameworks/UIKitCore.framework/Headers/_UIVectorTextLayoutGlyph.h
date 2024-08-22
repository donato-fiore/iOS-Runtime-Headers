// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVECTORTEXTLAYOUTGLYPH_H
#define _UIVECTORTEXTLAYOUTGLYPH_H

@class NSString;
@protocol _UIVectorTextLayoutGlyph;

#import <Foundation/Foundation.h>

#import "UIBezierPath.h"

@interface _UIVectorTextLayoutGlyph : NSObject <_UIVectorTextLayoutGlyph>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short glyph; // ivar: _glyph
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIBezierPath *path; // ivar: _path
@property (nonatomic) CGAffineTransform pathTransform; // ivar: _pathTransform
@property (nonatomic) CGRect rect; // ivar: _rect
@property (readonly) Class superclass;




@end


#endif