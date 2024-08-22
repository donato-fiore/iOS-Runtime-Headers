// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCAMERARECORDINGOPTIONSMODULECONTROLLER_H
#define HUCAMERARECORDINGOPTIONSMODULECONTROLLER_H

@class NSString;
@protocol HUSwitchCellDelegate;


#import "HUItemModuleController.h"

@interface HUCameraRecordingOptionsModuleController : HUItemModuleController <HUSwitchCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasNotificationSettingForItem:(id)arg0 ;
-(BOOL)isItemHeader:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)alertMessageForEventType:(NSUInteger)arg0 ;
-(id)alertTitleForEventType:(NSUInteger)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(void)displayAlertForItem:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif