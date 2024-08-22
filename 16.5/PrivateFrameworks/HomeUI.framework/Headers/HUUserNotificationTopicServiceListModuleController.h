// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUUSERNOTIFICATIONTOPICSERVICELISTMODULECONTROLLER_H
#define HUUSERNOTIFICATIONTOPICSERVICELISTMODULECONTROLLER_H



#import "HUItemModuleController.h"

@interface HUUserNotificationTopicServiceListModuleController : HUItemModuleController



-(BOOL)canSelectItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(Class)collectionCellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)showNotificationSettingsForServiceLikeItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif