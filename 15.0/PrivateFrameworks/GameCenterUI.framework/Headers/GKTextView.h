// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTEXTVIEW_H
#define GKTEXTVIEW_H

@class UITextView, GKTextStyle, NSAttributedString, NSString;


#import "GKLabel.h"

@interface GKTextView : UITextView

@property (retain, nonatomic) GKTextStyle *_baseStyle; // ivar: __baseStyle
@property (retain, nonatomic) GKTextStyle *appliedStyle; // ivar: _appliedStyle
@property (retain, nonatomic) NSAttributedString *attributedPlaceholderText;
@property (nonatomic) GKLabel *placeholderLabel; // ivar: _placeholderLabel
@property (retain, nonatomic) NSString *placeholderText;


+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)insertDictationResultPlaceholder;
-(void)applyTextStyle:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)removeDictationResultPlaceholder:(id)arg0 willInsertResult:(BOOL)arg1 ;
-(void)replayAndApplyStyle;
-(void)setAttributedText:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)textStorageDidChangeNotification:(id)arg0 ;
-(void)updatePlaceholderVisibility;


@end


#endif