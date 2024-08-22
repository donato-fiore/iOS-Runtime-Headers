// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREMOTEFILESTATUSVIEW_H
#define WFREMOTEFILESTATUSVIEW_H

@class UIView, NSArray, UIActivityIndicatorView, UIButton, UILabel;
@protocol WFRemoteFileStatusViewDelegate;



@interface WFRemoteFileStatusView : UIView

@property (readonly, nonatomic) UIView *containerView; // ivar: _containerView
@property (weak, nonatomic) NSObject<WFRemoteFileStatusViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *emptyConstraints; // ivar: _emptyConstraints
@property (readonly, nonatomic) NSArray *errorConstraints; // ivar: _errorConstraints
@property (readonly, nonatomic) UIActivityIndicatorView *indicatorView; // ivar: _indicatorView
@property (readonly, nonatomic) NSArray *loadingContraints; // ivar: _loadingContraints
@property (readonly, nonatomic) UIButton *recoveryButton; // ivar: _recoveryButton
@property (readonly, nonatomic) UILabel *statusLabel; // ivar: _statusLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setEmptyWithLabel:(BOOL)arg0 ;
-(void)setError:(id)arg0 ;
-(void)setLoading;


@end


#endif