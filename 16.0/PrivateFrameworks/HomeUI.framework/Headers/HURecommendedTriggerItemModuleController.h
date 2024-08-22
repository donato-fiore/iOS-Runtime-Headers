// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HURECOMMENDEDTRIGGERITEMMODULECONTROLLER_H
#define HURECOMMENDEDTRIGGERITEMMODULECONTROLLER_H

@class NSString;
@protocol HURecommendedTriggerItemModuleControllerDelegate;


#import "HUItemModuleController.h"

@interface HURecommendedTriggerItemModuleController : HUItemModuleController

@property (retain, nonatomic) NSString *analyticsPresentationContext; // ivar: _analyticsPresentationContext
@property (weak, nonatomic) NSObject<HURecommendedTriggerItemModuleControllerDelegate> *delegate; // ivar: _delegate


-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(void)didCommitTriggerBuilderForItem:(id)arg0 withError:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif