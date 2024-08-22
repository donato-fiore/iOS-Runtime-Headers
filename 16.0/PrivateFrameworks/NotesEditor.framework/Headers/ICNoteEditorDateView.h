// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNOTEEDITORDATEVIEW_H
#define ICNOTEEDITORDATEVIEW_H

@class UIView, ICSelectorDelayer, NSString, UIFont, UILabel, UIImageView, ICNote;
@protocol ICNoteDateFormatterControllerDelegate;


#import "ICNoteDateFormatterController.h"

@interface ICNoteEditorDateView : UIView <ICNoteDateFormatterControllerDelegate>



@property (nonatomic) CGFloat cachedHeight; // ivar: _cachedHeight
@property (retain, nonatomic) ICSelectorDelayer *dateViewLayoutUpdateDelayer; // ivar: _dateViewLayoutUpdateDelayer
@property (nonatomic) CGFloat dateViewMaximumWidthOnPreviousTextChange; // ivar: _dateViewMaximumWidthOnPreviousTextChange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIFont *font;
@property (retain, nonatomic) ICNoteDateFormatterController *formatterController; // ivar: _formatterController
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UILabel *label; // ivar: _label
@property (weak, nonatomic) UIImageView *lockImageView; // ivar: _lockImageView
@property (retain, nonatomic) ICNote *note; // ivar: _note
@property (readonly, nonatomic) CGFloat preferredHeight;
@property (readonly) Class superclass;


+(id)newDateView;
-(BOOL)iconHidden;
-(BOOL)isAccessibilityElement;
-(CGFloat)dateViewMaximumWidth;
-(id)accessibilityContainer;
-(id)accessibilityElements;
-(id)accessibilityLabel;
-(id)accessibilityUserInputLabels;
-(id)dateViewAttributes;
-(void)_updateLayout;
-(void)accessibilityElementDidBecomeFocused;
-(void)awakeFromNib;
-(void)contentSizeCategoryDidChange;
-(void)dateViewDidTap:(id)arg0 ;
-(void)dealloc;
-(void)formatter:(id)arg0 iconHiddenDidChange:(BOOL)arg1 ;
-(void)formatter:(id)arg0 iconImageDidChange:(id)arg1 ;
-(void)formatter:(id)arg0 textDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)reset;
-(void)updateLayoutIfNecessary;


@end


#endif