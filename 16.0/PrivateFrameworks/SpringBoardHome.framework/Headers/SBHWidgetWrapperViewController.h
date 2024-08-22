// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHWIDGETWRAPPERVIEWCONTROLLER_H
#define SBHWIDGETWRAPPERVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray;
@protocol SBIconViewObserver, SBIconViewActionDelegate, SBHWidgetWrapperViewControllerDelegate, SBHAddWidgetSheetGalleryItem, SBIconViewProviding, SBIconListLayoutProvider;


#import "SBIconView.h"
#import "SBHWidgetWrapperView.h"

@interface SBHWidgetWrapperViewController : UIViewController <SBIconViewObserver, SBIconViewActionDelegate>



@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (nonatomic) CGAffineTransform contentTransform; // ivar: _contentTransform
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *defaultBackgroundViewConfigurator; // ivar: _defaultBackgroundViewConfigurator
@property (copy, nonatomic) id *defaultBackgroundViewProvider; // ivar: _defaultBackgroundViewProvider
@property (weak, nonatomic) NSObject<SBHWidgetWrapperViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDragging) BOOL dragging; // ivar: _dragging
@property (nonatomic) BOOL forcesEdgeAntialiasing; // ivar: _forcesEdgeAntialiasing
@property (readonly, nonatomic) NSObject<SBHAddWidgetSheetGalleryItem> *galleryItem; // ivar: _galleryItem
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIconView *iconView; // ivar: _iconView
@property (readonly, weak, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (nonatomic) NSUInteger indexOfSelectedSizeClass; // ivar: _indexOfSelectedSizeClass
@property (readonly, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (nonatomic) NSInteger selectedSizeClass;
@property (nonatomic) CGAffineTransform shadowTransform; // ivar: _shadowTransform
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *supportedSizeClasses; // ivar: _supportedSizeClasses
@property (nonatomic) BOOL titleAndSubtitleVisible; // ivar: _titleAndSubtitleVisible
@property (readonly, nonatomic) SBHWidgetWrapperView *wrapperView;


-(id)_widgetBackgroundViewConfigurator:(SEL)arg0 ;
-(id)_widgetBackgroundViewProvider:(SEL)arg0 ;
-(id)_widgetDragHandler;
-(id)initWithGalleryItem:(id)arg0 titleAndSubtitleVisible:(BOOL)arg1 listLayoutProvider:(id)arg2 iconViewProvider:(id)arg3 ;
-(void)_configureCustomImageViewController:(id)arg0 ;
-(void)_configureIconView:(id)arg0 forIcon:(id)arg1 ;
-(void)_removeIconViewKeepObserving:(BOOL)arg0 ;
-(void)_updateAvocadoHostViewController;
-(void)dealloc;
-(void)iconTouchBegan:(id)arg0 ;
-(void)iconView:(id)arg0 didChangeCustomImageViewController:(id)arg1 ;
-(void)iconViewDidEndDrag:(id)arg0 ;
-(void)iconViewWillBeginDrag:(id)arg0 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif