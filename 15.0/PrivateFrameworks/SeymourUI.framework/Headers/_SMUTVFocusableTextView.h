// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SMUTVFOCUSABLETEXTVIEW_H
#define _SMUTVFOCUSABLETEXTVIEW_H

@class TVFocusableTextView, NSAttributedString, UIColor, NSString;
@protocol SMUTVFocusableTextView;



@interface _SMUTVFocusableTextView : TVFocusableTextView <SMUTVFocusableTextView>



@property (retain, nonatomic) NSAttributedString *descriptionText;
@property (retain, nonatomic) UIColor *descriptionTextColor;
@property (nonatomic) NSUInteger maximumNumberOfLines;
@property (retain, nonatomic) NSString *moreLabelText;
@property (retain, nonatomic) UIColor *moreLabelTextColor;




@end


#endif