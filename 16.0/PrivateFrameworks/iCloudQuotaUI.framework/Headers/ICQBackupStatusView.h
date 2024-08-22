// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQBACKUPSTATUSVIEW_H
#define ICQBACKUPSTATUSVIEW_H

@class UIView, UIActivityIndicatorView, UIProgressView, UILabel, NSMutableSet, NSDateComponentsFormatter, NSError, NSString, NSArray;
@protocol PSHeaderFooterView;



@interface ICQBackupStatusView : UIView <PSHeaderFooterView>

 {
    UIActivityIndicatorView *_spinner;
    UIProgressView *_progressBar;
    UILabel *_statusLabel;
    UILabel *_timeRemainingLabel;
    UILabel *_backupIssueLabel;
    UILabel *_lastBackupLabel;
    int _animatingToState;
    BOOL _animatedToEnabled;
    NSMutableSet *_visibleSubviews;
    NSDateComponentsFormatter *_durationFormatter;
}


@property (retain, nonatomic) NSError *backupError; // ivar: _backupError
@property (nonatomic) CGFloat backupProgress; // ivar: _backupProgress
@property (retain, nonatomic) NSString *footerText; // ivar: _footerText
@property (retain, nonatomic) NSArray *syncErrors; // ivar: _syncErrors


-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(CGFloat)progress;
-(id)initWithSpecifier:(id)arg0 ;
-(void)_layoutSubviews;
-(void)_sizeToFitWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)setLastBackupText:(id)arg0 ;
-(void)sizeToFit;
-(void)updateStatus:(id)arg0 ;
-(void)updateViewsForBackupState:(int)arg0 restoreState:(int)arg1 enabled:(BOOL)arg2 ;


@end


#endif