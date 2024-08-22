// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCDERRORLOADINGVIEW_H
#define MCDERRORLOADINGVIEW_H

@class UIView;
@protocol MCDErrorViewDelegate;



@interface MCDErrorLoadingView : UIView

@property (weak, nonatomic) NSObject<MCDErrorViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL shouldEnableNetwork; // ivar: _shouldEnableNetwork


-(id)initWithTitle:(id)arg0 buttonText:(id)arg1 ;
-(void)retryButtonPressed:(id)arg0 ;


@end


#endif