// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOSDETAILSVIEWCONTROLLER_H
#define PUPHOTOSDETAILSVIEWCONTROLLER_H

@class PXPhotosDetailsUIViewController, NSString;
@protocol PUAssetViewModelChangeObserver, PUAccessoryContentViewController, PUAccessoryContentViewControllerDelegate;


#import "PUAssetViewModel.h"

@interface PUPhotosDetailsViewController : PXPhotosDetailsUIViewController <PUAssetViewModelChangeObserver, PUAccessoryContentViewController>

 {
    ? _superRespondsTo;
}


@property (weak, nonatomic) NSObject<PUAccessoryContentViewControllerDelegate> *accessoryContentViewControllerDelegate; // ivar: _accessoryContentViewControllerDelegate
@property (readonly, nonatomic) PUAssetViewModel *assetViewModel; // ivar: _assetViewModel
@property (readonly, nonatomic) UIEdgeInsets contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxVisibleHeightInEdit; // ivar: _maxVisibleHeightInEdit
@property (readonly, nonatomic) CGSize minimumContentSize;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)contentAreaContainsPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(NSUInteger)occludedContentEdges;
-(id)initWithContext:(id)arg0 configuration:(id)arg1 ;
-(id)initWithContext:(id)arg0 configuration:(id)arg1 assetViewModel:(id)arg2 ;
-(id)initWithContext:(id)arg0 options:(NSUInteger)arg1 ;
-(struct CGRect )contentBoundsInCoordinateSpace:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(struct UIEdgeInsets )px_safeAreaInsets;
-(void)_configureVisualSearchTopResultItem;
-(void)_updateContentUnavailableConfigurationUsingState:(id)arg0 ;
-(void)editingDidChange:(BOOL)arg0 ;
-(void)editorHeightDidChange;
-(void)scrollViewControllerContentBoundsDidChange:(id)arg0 ;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)setEmpty:(BOOL)arg0 ;
-(void)setMaxVisibleContentInsetsWhenInEdit:(struct UIEdgeInsets )arg0 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;
-(void)visualSearchLookupWidgetDidTap;


@end


#endif