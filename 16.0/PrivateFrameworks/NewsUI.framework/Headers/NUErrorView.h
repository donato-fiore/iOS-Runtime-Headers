// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUERRORVIEW_H
#define NUERRORVIEW_H

@class UIView, UILabel;


#import "NUErrorMessage.h"
#import "NUTrait.h"

@interface NUErrorView : UIView

@property (retain, nonatomic) NUErrorMessage *errorMessage; // ivar: _errorMessage
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NUTrait *labelMaxWidthTrait; // ivar: _labelMaxWidthTrait
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (nonatomic) NSUInteger verticalAlignment; // ivar: _verticalAlignment


-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(id)accessibilityLabel;
-(id)attributedStringForErrorMessage:(id)arg0 ;
-(id)initWithErrorMessage:(id)arg0 ;
-(void)errorMessage:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif