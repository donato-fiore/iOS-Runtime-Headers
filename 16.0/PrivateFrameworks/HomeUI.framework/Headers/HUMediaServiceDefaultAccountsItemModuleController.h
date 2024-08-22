// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMEDIASERVICEDEFAULTACCOUNTSITEMMODULECONTROLLER_H
#define HUMEDIASERVICEDEFAULTACCOUNTSITEMMODULECONTROLLER_H

@protocol HUItemModuleControllerHosting, HUMediaServiceDefaultAccountsItemModuleControllerDelegate;


#import "HUItemModuleController.h"
#import "HUMediaServiceDefaultAccountsItemModule.h"

@interface HUMediaServiceDefaultAccountsItemModuleController : HUItemModuleController {
    id<HUItemModuleControllerHosting> *_host;
}


@property (readonly, weak, nonatomic) NSObject<HUMediaServiceDefaultAccountsItemModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) HUMediaServiceDefaultAccountsItemModule *module;
@property (nonatomic) NSInteger selectedMediaServiceIndex; // ivar: _selectedMediaServiceIndex
@property (nonatomic) BOOL shouldClearSpinnerOnNextUpdate; // ivar: _shouldClearSpinnerOnNextUpdate


-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)_indexPathForItem:(id)arg0 ;
-(id)host;
-(id)initWithModule:(id)arg0 delegate:(id)arg1 host:(id)arg2 ;
-(id)updateDefaultAccount:(id)arg0 ;
-(void)_clearSpinner;
-(void)setHost:(id)arg0 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif