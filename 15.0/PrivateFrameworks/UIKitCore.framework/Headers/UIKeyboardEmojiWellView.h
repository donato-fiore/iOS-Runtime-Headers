// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDEMOJIWELLVIEW_H
#define UIKEYBOARDEMOJIWELLVIEW_H

@class NSIndexPath, NSArray, UIFont, NSString;


#import "UIView.h"
#import "UIColor.h"
#import "UILabel.h"

@interface UIKeyboardEmojiWellView : UIView

@property (nonatomic, getter=isActiveSelection) BOOL activeSelection; // ivar: _activeSelection
@property (retain, nonatomic) NSIndexPath *associatedIndexPath; // ivar: _associatedIndexPath
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) NSArray *compositeImageRepresentation; // ivar: _compositeImageRepresentation
@property (nonatomic) CGSize compositeImageSize; // ivar: _compositeImageSize
@property (retain, nonatomic) UIFont *labelFont; // ivar: _labelFont
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (retain, nonatomic) UIColor *selectionBackgroundColor; // ivar: _selectionBackgroundColor
@property (retain, nonatomic) NSString *stringRepresentation; // ivar: _stringRepresentation
@property (retain, nonatomic) UILabel *unreleasedBanner; // ivar: _unreleasedBanner
@property (nonatomic) BOOL unreleasedHighlight; // ivar: _unreleasedHighlight
@property (retain, nonatomic) UIView *wellContentView; // ivar: _wellContentView


-(id)fontUsingSilhouette:(NSUInteger)arg0 size:(CGFloat)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif