// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRXCARDBOTTOMTRAY_H
#define PRXCARDBOTTOMTRAY_H

@class UIView, NSArray, UIImageView, NSString, UILabel;
@protocol PRXCardBottomTrayDelegate;



@interface PRXCardBottomTray : UIView

@property (copy, nonatomic) NSArray *actionButtons; // ivar: _actionButtons
@property (retain, nonatomic) UIView *activityIndicator; // ivar: _activityIndicator
@property (copy, nonatomic) NSArray *buttonConstraints; // ivar: _buttonConstraints
@property (readonly, nonatomic) BOOL containsContents;
@property (weak, nonatomic) NSObject<PRXCardBottomTrayDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSArray *titleConstraints; // ivar: _titleConstraints
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateConstraints;


@end


#endif