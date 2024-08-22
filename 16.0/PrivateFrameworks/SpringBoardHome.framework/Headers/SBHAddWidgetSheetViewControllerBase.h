// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHADDWIDGETSHEETVIEWCONTROLLERBASE_H
#define SBHADDWIDGETSHEETVIEWCONTROLLERBASE_H

@class UIViewController, MTMaterialView;
@protocol SBHAddWidgetSheetViewControllerDelegate, SBIconViewProviding, SBIconListLayoutProvider;


#import "SBHAddWidgetSheetAppCollectionViewCellConfigurator.h"

@interface SBHAddWidgetSheetViewControllerBase : UIViewController

@property (readonly, nonatomic) SBHWidgetFilteringParameters allowedWidgets; // ivar: _allowedWidgets
@property (retain, nonatomic) SBHAddWidgetSheetAppCollectionViewCellConfigurator *appCellConfigurator; // ivar: _appCellConfigurator
@property (weak, nonatomic) NSObject<SBHAddWidgetSheetViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) MTMaterialView *externalBackgroundView; // ivar: _externalBackgroundView
@property (weak, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (retain, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider


-(id)initWithListLayoutProvider:(id)arg0 iconViewProvider:(id)arg1 allowedWidgets:(struct SBHWidgetFilteringParameters )arg2 appCellConfigurator:(id)arg3 ;
-(id)initWithListLayoutProvider:(id)arg0 iconViewProvider:(id)arg1 allowedWidgets:(struct SBHWidgetFilteringParameters )arg2 appCellIconImageCache:(id)arg3 ;
-(struct UIEdgeInsets )preferredInsetsForSheetPresentationInInterfaceOrientation:(NSInteger)arg0 ;


@end


#endif