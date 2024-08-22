// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUICANDIDATEGROUPHEADER_H
#define TUICANDIDATEGROUPHEADER_H

@class UICollectionReusableView, NSString, UILabel;
@protocol TUICandidateViewStyle;



@interface TUICandidateGroupHeader : UICollectionReusableView

@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (nonatomic) CGFloat rowHeight; // ivar: _rowHeight
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *style; // ivar: _style
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (nonatomic) CGRect virtualLabelContainerFrame; // ivar: _virtualLabelContainerFrame
@property (nonatomic) CGRect visibleBounds; // ivar: _visibleBounds


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commonInit;
-(void)layoutSubviews;
-(void)updateGroupHeaderLabelPosition;


@end


#endif