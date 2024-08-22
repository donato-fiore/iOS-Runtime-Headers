// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLECONFIRMATIONLOADINGVIEW_H
#define PXPEOPLECONFIRMATIONLOADINGVIEW_H

@class UIView, UIActivityIndicatorView, UILabel;
@protocol PXPerson;



@interface PXPeopleConfirmationLoadingView : UIView

@property (readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // ivar: _loadingIndicator
@property (nonatomic) NSUInteger loadingState; // ivar: _loadingState
@property (readonly, nonatomic) UIView *loadingStatusView; // ivar: _loadingStatusView
@property (readonly, nonatomic) UILabel *noneFoundLabel; // ivar: _noneFoundLabel
@property (readonly, nonatomic) NSObject<PXPerson> *person; // ivar: _person


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 person:(id)arg1 localizedName:(id)arg2 ;


@end


#endif