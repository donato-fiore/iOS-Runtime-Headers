// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIREDEEMNATIVERESULTSVIEWCONTROLLER_H
#define SKUIREDEEMNATIVERESULTSVIEWCONTROLLER_H

@class UIButton, NSString, UIImageView, UIImage, NSOperationQueue;
@protocol SKUIItemStateCenterObserver, SKUIRedeemResultsViewDelegate;


#import "SKUIRedeemResultsViewController.h"
#import "SKUITextLayout.h"
#import "SKUITextBoxView.h"
#import "SKUIItemStateCenter.h"
#import "SKUIGiftItemView.h"
#import "SKUIRedeemResultMessageView.h"
#import "SKUIRedeemITunesPassLockup.h"

@interface SKUIRedeemNativeResultsViewController : SKUIRedeemResultsViewController <SKUIItemStateCenterObserver, SKUIRedeemResultsViewDelegate>



@property (retain, nonatomic) UIButton *anotherButton; // ivar: _anotherButton
@property (nonatomic) NSUInteger currentItemStateFlag; // ivar: _currentItemStateFlag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL extendedMessageIsExpanded; // ivar: _extendedMessageIsExpanded
@property (retain, nonatomic) SKUITextLayout *extendedMessageTextLayout; // ivar: _extendedMessageTextLayout
@property (retain, nonatomic) SKUITextBoxView *extendedMessageView; // ivar: _extendedMessageView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *headerImageView; // ivar: _headerImageView
@property (retain, nonatomic) UIImage *itemImage; // ivar: _itemImage
@property (retain, nonatomic) SKUIItemStateCenter *itemStateCenter; // ivar: _itemStateCenter
@property (retain, nonatomic) SKUIGiftItemView *itemView; // ivar: _itemView
@property (retain, nonatomic) SKUIRedeemResultMessageView *messageView; // ivar: _messageView
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) SKUIRedeemITunesPassLockup *passbookLockup; // ivar: _passbookLockup
@property (readonly) Class superclass;


+(BOOL)canShowResultsForRedeem:(id)arg0 ;
-(CGFloat)_tableWidth;
-(id)_emptySection;
-(id)_item;
-(id)_linksSection;
-(id)_passbookLearnMoreSection;
-(id)_resultImageViewSection;
-(id)initWithRedeem:(id)arg0 ;
-(void)_extendedMessageAction:(id)arg0 ;
-(void)_openAction:(id)arg0 ;
-(void)_passbookLockupAction:(id)arg0 ;
-(void)_redeemAnotherAction:(id)arg0 ;
-(void)_reloadResultViewMessage;
-(void)_reloadSections;
-(void)_setHeaderImage:(id)arg0 ;
-(void)dealloc;
-(void)itemStateCenter:(id)arg0 itemStatesChanged:(id)arg1 ;
-(void)loadView;
-(void)redeemResultsView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif