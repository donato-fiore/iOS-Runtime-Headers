// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCONTENTVIEW_H
#define GKCONTENTVIEW_H

@class UIView, UITableView, UIImageView, UIActivityIndicatorView, UIButton, NSArray, UIImage, NSString, UIFont, UILabel;



@interface GKContentView : UIView {
    UITableView *_table;
    UIImageView *_tableWellView;
    BOOL _needsLayout;
}


@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (readonly, retain, nonatomic) NSArray *connectionButtons; // ivar: _connectionButtons
@property (nonatomic) UIImage *icon;
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (nonatomic) NSString *message;
@property (readonly, nonatomic) UIFont *messageFont;
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (nonatomic) NSInteger numberOfMessageLines;
@property (nonatomic) NSInteger numberOfTitleLines;
@property (retain, nonatomic) UIButton *otherButton; // ivar: _otherButton
@property (readonly, retain, nonatomic) UITableView *table;
@property (nonatomic) NSString *title;
@property (readonly, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)maxTextWidth;
-(id)_createButton:(BOOL)arg0 ;
-(id)_createConnectionButtonWithType:(NSUInteger)arg0 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 icon:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 ;
-(void)_createCancelButtonWithTitle:(id)arg0 ;
-(void)_createMessageLabelIfNeeded;
-(void)_createOtherButtonWithTitle:(id)arg0 ;
-(void)_createTitleLabelIfNeeded;
-(void)dealloc;
-(void)layout;
-(void)layoutIfNeeded;
-(void)setConnectionButtonTypes:(NSUInteger)arg0 ;
-(void)showActivityIndicator:(BOOL)arg0 ;


@end


#endif