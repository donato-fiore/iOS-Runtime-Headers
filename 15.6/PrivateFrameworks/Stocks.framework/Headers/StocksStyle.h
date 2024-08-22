// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STOCKSSTYLE_H
#define STOCKSSTYLE_H

@class UIColor, UIFont;

#import <Foundation/Foundation.h>


@interface StocksStyle : NSObject {
    UIColor *_chartHighlightColor;
    UIFont *_mainFont;
    UIFont *_chartLabelFont;
}




+(id)sharedStyle;
-(id)boldFontOfSize:(CGFloat)arg0 ;
-(id)chartHighlightColor;
-(id)fontOfSize:(CGFloat)arg0 ;
-(id)gainColor;
-(id)init;
-(id)lightFontOfSize:(CGFloat)arg0 ;
-(id)lossColor;
-(id)mediumFontOfSize:(CGFloat)arg0 ;
-(void)resetLocale;


@end


#endif