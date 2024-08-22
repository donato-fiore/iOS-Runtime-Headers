// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICINLINEATTACHMENTVIEW_H
#define ICINLINEATTACHMENTVIEW_H

@class UIView, NSString, NSRegularExpression, UIImage, UILabel, CADisplayLink, NSDictionary;
@protocol ICAttachmentViewInitializing, ICInlineAttachmentViewAnimationDelegate;


#import "ICAttributedStringRippler.h"
#import "ICInlineTextAttachment.h"

@interface ICInlineAttachmentView : UIView <ICAttachmentViewInitializing>



@property (readonly, nonatomic) CGFloat baselineOffsetFromBottom;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICInlineAttachmentViewAnimationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex; // ivar: _highlightPatternRegex
@property (readonly, nonatomic) UIImage *imageForPrinting;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) CADisplayLink *rippleAnimationTimer; // ivar: _rippleAnimationTimer
@property (retain, nonatomic) ICAttributedStringRippler *rippler; // ivar: _rippler
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *surroundingAttributes; // ivar: _surroundingAttributes
@property (weak, nonatomic) ICInlineTextAttachment *textAttachment; // ivar: _textAttachment
@property (nonatomic) CGFloat textContainerWidth; // ivar: _textContainerWidth


-(BOOL)isAccessibilityElement;
-(id)accessibilityAttributedLabel;
-(id)createNewLabel;
-(id)initWithTextAttachment:(id)arg0 forManualRendering:(BOOL)arg1 ;
-(void)animateInsertionIfNecessary;
-(void)attachmentDataChanged:(id)arg0 ;
-(void)beginRippleAnimation;
-(void)endRippleAnimation;
-(void)objectDidUpdateShare:(id)arg0 ;
-(void)updateHighlightsWithAttributes:(id)arg0 ;
-(void)updateLabel;
-(void)updateRippleAnimation;
-(void)updateStyleWithAttributes:(id)arg0 ;


@end


#endif