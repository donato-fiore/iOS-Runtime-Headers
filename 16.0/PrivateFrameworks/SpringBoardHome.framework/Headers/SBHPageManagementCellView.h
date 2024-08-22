// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHPAGEMANAGEMENTCELLVIEW_H
#define SBHPAGEMANAGEMENTCELLVIEW_H

@class UIView, NSString, MTMaterialView;
@protocol SBIconListModelObserver, SBFolderObserver;


#import "SBFolder.h"
#import "SBIconListView.h"
#import "SBHPageManagementCheckbox.h"

@interface SBHPageManagementCellView : UIView <SBIconListModelObserver, SBFolderObserver>

 {
    SBHPageManagementCellMetrics _metrics;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBFolder *folder; // ivar: _folder
@property (nonatomic) BOOL hasCleanedUpListView; // ivar: _hasCleanedUpListView
@property (readonly) NSUInteger hash;
@property (nonatomic) SBIconImageInfo iconImageInfo; // ivar: _iconImageInfo
@property (readonly, nonatomic) MTMaterialView *listBackgroundView; // ivar: _listBackgroundView
@property (readonly, nonatomic) UIView *listHighlightView; // ivar: _listHighlightView
@property (nonatomic, getter=isListHighlighted) BOOL listHighlighted; // ivar: _listHighlighted
@property (readonly, nonatomic) SBIconListView *listView; // ivar: _listView
@property (nonatomic) BOOL scalesListView; // ivar: _scalesListView
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBHPageManagementCheckbox *toggleButton; // ivar: _toggleButton
@property (nonatomic) CGFloat toggleButtonAlpha; // ivar: _toggleButtonAlpha
@property (readonly, nonatomic) MTMaterialView *toggleButtonBackgroundView; // ivar: _toggleButtonBackgroundView


-(id)initWithListView:(id)arg0 listBackgroundView:(id)arg1 toggleButtonBackgroundView:(id)arg2 folder:(id)arg3 metrics:(struct SBHPageManagementCellMetrics )arg4 toggleButtonAllowed:(BOOL)arg5 ;
-(void)_togglePageHidden:(id)arg0 ;
-(void)cleanUpListView;
-(void)folder:(id)arg0 listHiddenDidChange:(id)arg1 ;
-(void)iconListHiddenDidChange:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif