// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDBIUIMAGEGENERATOR_H
#define UIKEYBOARDBIUIMAGEGENERATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "UIImage.h"
#import "UIColor.h"

@interface UIKeyboardBIUImageGenerator : NSObject {
    BOOL _useButtonShapes;
    UIImage *_biuBoldImage;
    UIImage *_biuItalicImage;
    UIImage *_biuUnderlineImage;
    NSMutableDictionary *_imageCache;
}


@property (retain, nonatomic) UIColor *normalColor; // ivar: _normalColor
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(id)BIUImageForBold:(BOOL)arg0 italic:(BOOL)arg1 underline:(BOOL)arg2 ;
-(id)init;
-(void)_accessibilitySettingsChanged:(id)arg0 ;
-(void)_drawBIUAtSize:(struct CGSize )arg0 bold:(BOOL)arg1 italic:(BOOL)arg2 underline:(BOOL)arg3 ;
-(void)_invalidateCache;


@end


#endif