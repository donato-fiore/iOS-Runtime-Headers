// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDOCCAMSAVEBUTTON_H
#define ICDOCCAMSAVEBUTTON_H

@class UIButton, UILabel, NSMutableArray;



@interface ICDocCamSaveButton : UIButton

@property (retain, nonatomic) UILabel *countLabel; // ivar: _countLabel
@property (nonatomic) NSInteger documentCount; // ivar: _documentCount
@property (retain, nonatomic) NSMutableArray *layoutConstraints; // ivar: _layoutConstraints
@property (nonatomic) NSInteger maxWidthForPortraitIPhone; // ivar: _maxWidthForPortraitIPhone
@property (retain, nonatomic) UILabel *saveLabel; // ivar: _saveLabel


-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)accessibilityUserInputLabels;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)saveButtonCountStringForDocumentCount:(NSUInteger)arg0 ;
-(id)saveButtonTitleForDocumentCount:(NSUInteger)arg0 ;
-(void)layoutSubviews;


@end


#endif