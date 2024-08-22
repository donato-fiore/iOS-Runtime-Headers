// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICABSTRACTATTACHMENTVIEWCONTROLLER_H
#define ICABSTRACTATTACHMENTVIEWCONTROLLER_H

@class UIViewController, UIColor, NSRegularExpression;



@interface ICAbstractAttachmentViewController : UIViewController

@property (readonly) BOOL forManualRendering; // ivar: _forManualRendering
@property (nonatomic) CGFloat foregroundAlpha; // ivar: _foregroundAlpha
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex; // ivar: _highlightPatternRegex
@property (readonly, nonatomic) BOOL isInResponderChain; // ivar: _isInResponderChain


-(void)contentSizeCategoryDidChange;
-(void)prepareForPrinting;
-(void)zoomFactorOrInsetsDidChange;


@end


#endif