// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUEXPANDABLEBLURBVIEW_H
#define MUEXPANDABLEBLURBVIEW_H

@class UIView, NSString;


#import "MUExpandingLabel.h"

@interface MUExpandableBlurbView : UIView {
    MUExpandingLabel *_expandingLabel;
}


@property (copy, nonatomic) id *moreAction; // ivar: _moreAction
@property (nonatomic) NSUInteger numberOfLinesWhenCollapsed;
@property (copy, nonatomic) id *resizeBlock; // ivar: _resizeBlock
@property (copy, nonatomic) NSString *text;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)_expand;
-(void)_setupLabel;
-(void)infoCardThemeChanged;


@end


#endif