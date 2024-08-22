// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSEXTERNALDISPLAYZOOMSELECTIONLISTCONTROLLER_H
#define DBSEXTERNALDISPLAYZOOMSELECTIONLISTCONTROLLER_H

@class SBSExternalDisplayService, SBSConnectedDisplayInfo, SBSDisplayModeSettings;


#import "DBSDisplayZoomSelectionListController.h"

@interface DBSExternalDisplayZoomSelectionListController : DBSDisplayZoomSelectionListController

@property (retain, nonatomic) SBSExternalDisplayService *displayService; // ivar: _displayService
@property (retain, nonatomic) SBSConnectedDisplayInfo *externalDisplayInfo; // ivar: _externalDisplayInfo
@property (retain, nonatomic) SBSDisplayModeSettings *selectedDisplayModeSettings; // ivar: _selectedDisplayModeSettings


-(NSUInteger)displayZoomTableViewCellCurrentlySelectedDisplayZoomOption:(id)arg0 ;
-(id)supportedDisplayZoomOptions;
-(void)_updateNavigationButtonStateWithNewDisplayModeSettings:(id)arg0 ;
-(void)displayZoomTableViewCell:(id)arg0 userDidTapOnDisplayZoomOption:(NSUInteger)arg1 ;
-(void)updateNavigationButtonStateWithCurrentState;
-(void)userDidTapDone:(id)arg0 ;


@end


#endif