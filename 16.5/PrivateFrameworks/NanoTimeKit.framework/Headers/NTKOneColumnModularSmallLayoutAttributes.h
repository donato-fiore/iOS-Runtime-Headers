// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKONECOLUMNMODULARSMALLLAYOUTATTRIBUTES_H
#define NTKONECOLUMNMODULARSMALLLAYOUTATTRIBUTES_H

@class CLKFont;

#import <Foundation/Foundation.h>


@interface NTKOneColumnModularSmallLayoutAttributes : NSObject

@property (nonatomic) CGFloat imageHeight; // ivar: _imageHeight
@property (nonatomic) CGFloat imageOriginY; // ivar: _imageOriginY
@property (nonatomic) CGFloat marginWidth; // ivar: _marginWidth
@property (nonatomic) CGFloat minimumFontSize; // ivar: _minimumFontSize
@property (nonatomic) CGFloat subtitleBaselineOffset; // ivar: _subtitleBaselineOffset
@property (retain, nonatomic) CLKFont *subtitleFont; // ivar: _subtitleFont
@property (nonatomic) CGFloat titleBaselineOffset; // ivar: _titleBaselineOffset
@property (retain, nonatomic) CLKFont *titleFont; // ivar: _titleFont


+(id)attributesForTemplate:(id)arg0 forDevice:(id)arg1 ;


@end


#endif