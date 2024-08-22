// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTVVIEWINGPROFILESDEVICESMODULECONTROLLER_H
#define HUTVVIEWINGPROFILESDEVICESMODULECONTROLLER_H

@class NSString;
@protocol HUSwitchCellDelegate;


#import "HUItemModuleController.h"
#import "HUTVViewingProfilesDevicesItemModule.h"

@interface HUTVViewingProfilesDevicesModuleController : HUItemModuleController <HUSwitchCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUTVViewingProfilesDevicesItemModule *module;
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(id)initWithModule:(id)arg0 host:(id)arg1 ;
-(void)_toggleShowTVViewingProfileForItem:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;


@end


#endif