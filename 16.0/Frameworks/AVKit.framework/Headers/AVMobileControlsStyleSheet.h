// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOBILECONTROLSSTYLESHEET_H
#define AVMOBILECONTROLSSTYLESHEET_H

@class UITraitCollection;

#import <Foundation/Foundation.h>


@interface AVMobileControlsStyleSheet : NSObject {
    CGFloat _statusBarHeight;
}


@property (readonly, nonatomic) UIEdgeInsets embeddedInlineInsets; // ivar: _embeddedInlineInsets
@property (readonly, nonatomic) UIEdgeInsets landscapeFullscreenInsets;
@property (readonly, nonatomic) UIEdgeInsets portraitFullscreenInsets;
@property (readonly, nonatomic) CGFloat standardPaddingFullScreen;
@property (readonly, nonatomic) CGFloat standardPaddingInline;
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(id)initWithTraitCollection:(id)arg0 ;
-(struct UIEdgeInsets )playbackControlsViewLayoutMarginsForView:(id)arg0 keyboardHeight:(CGFloat)arg1 isFullScreen:(BOOL)arg2 ;


@end


#endif