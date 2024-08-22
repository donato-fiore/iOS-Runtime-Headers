// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTORAGEOPTIONTIP_H
#define STSTORAGEOPTIONTIP_H

@class NSString;
@protocol STStorageOptionTipDelegate;


#import "STStorageTip.h"

@interface STStorageOptionTip : STStorageTip

@property (retain) NSString *activatingString;
@property float activationPercent;
@property (retain) NSString *additionalButtonTitle; // ivar: _additionalButtonTitle
@property (retain) NSString *confirmationButtonTitle; // ivar: _confirmationButtonTitle
@property (retain) NSString *confirmationText; // ivar: _confirmationText
@property (weak) NSObject<STStorageOptionTipDelegate> *delegate; // ivar: _delegate
@property (retain) NSString *enableButtonTitle;
@property NSInteger eventualGain;
@property NSInteger immediateGain;
@property BOOL mayCauseDataLoss; // ivar: _mayCauseDataLoss


-(id)getValue:(id)arg0 ;
-(id)init;
-(void)enableOption;
-(void)performAdditionalAction;
-(void)setValue:(id)arg0 specifier:(id)arg1 ;


@end


#endif