// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERASETTINGSMODULECONTROLLER_H
#define HUCAMERASETTINGSMODULECONTROLLER_H

@class NSString;
@protocol UITextViewDelegate;


#import "HUItemModuleController.h"

@interface HUCameraSettingsModuleController : HUItemModuleController <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useProxSetupPresentationStyle; // ivar: _useProxSetupPresentationStyle


-(BOOL)canSelectDisabledItem:(id)arg0 ;
-(BOOL)canSelectItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(void)setHost:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewSizeDidChanged;


@end


#endif