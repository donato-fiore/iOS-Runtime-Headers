// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYMUTESTATECONTROLLER_H
#define PXSTORYMUTESTATECONTROLLER_H

@class NSString;
@protocol PXChangeObserver, PXUserDefaultsDataSource;


#import "PXStoryController.h"
#import "PXStoryModel.h"
#import "PXStoryViewModel.h"
#import "PXVolumeController.h"

@interface PXStoryMuteStateController : PXStoryController <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXStoryModel *mainModel; // ivar: _mainModel
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PXUserDefaultsDataSource> *userDefaults; // ivar: _userDefaults
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel
@property (readonly, nonatomic) PXVolumeController *volumeController; // ivar: _volumeController


-(id)initWithObservableModel:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 volumeController:(id)arg1 userDefaults:(id)arg2 ;
-(void)_invalidateMainModel;
-(void)_saveMutedStatePreference;
-(void)_updateMainModel;
-(void)configureUpdater:(id)arg0 ;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif