// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSPAUSEDCARDVIEW_H
#define CPSPAUSEDCARDVIEW_H

@class UIView, NSString, UIActivityIndicatorView, UILabel;
@protocol CPSCardPlatterProviding;


#import "CPSCardPlatterView.h"

@interface CPSPausedCardView : UIView <CPSCardPlatterProviding>



@property (retain, nonatomic) CPSCardPlatterView *cardPlatterView; // ivar: _cardPlatterView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *title; // ivar: _title


-(id)initWithReason:(NSUInteger)arg0 title:(id)arg1 backgroundColor:(id)arg2 ;
-(struct CGSize )intrinsicContentSize;


@end


#endif