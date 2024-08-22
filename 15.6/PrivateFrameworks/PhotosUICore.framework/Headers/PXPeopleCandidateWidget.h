// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLECANDIDATEWIDGET_H
#define PXPEOPLECANDIDATEWIDGET_H

@class NSLayoutConstraint, UIView, NSString, UILabel, UIButton, PHPerson;
@protocol PXChangeObserver, PXUIWidget, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

#import <Foundation/Foundation.h>

#import "PXAssetActionManager.h"
#import "PXTilingController.h"
#import "PXPhotosDetailsContext.h"
#import "PXPeopleSuggestionDataSource.h"
#import "PXOneUpPresentation.h"
#import "PXSectionedSelectionManager.h"
#import "PXWidgetSpec.h"

@interface PXPeopleCandidateWidget : NSObject <PXChangeObserver, PXUIWidget>



@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (retain, nonatomic) NSLayoutConstraint *avatarToLeadingConstraint; // ivar: _avatarToLeadingConstraint
@property (readonly, nonatomic) NSInteger contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) NSInteger contentViewAnchoringType;
@property (retain, nonatomic) PXPhotosDetailsContext *context; // ivar: _context
@property (readonly, nonatomic) BOOL cursorInteractionEnabled;
@property (retain, nonatomic) PXPeopleSuggestionDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissed; // ivar: _dismissed
@property (readonly, nonatomic) CGFloat extraSpaceNeededAtContentBottom;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) CGSize maxVisibleSizeInEditMode;
@property (weak, nonatomic) UIButton *notNowButton; // ivar: _notNowButton
@property (retain, nonatomic) NSLayoutConstraint *notNowToTrailingConstraint; // ivar: _notNowToTrailingConstraint
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property (retain, nonatomic) PHPerson *person; // ivar: _person
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (retain, nonatomic) PXWidgetSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) NSObject<PXWidgetDelegate> *widgetDelegate; // ivar: _widgetDelegate
@property (weak, nonatomic) NSObject<PXWidgetEditingDelegate> *widgetEditingDelegate;
@property (weak, nonatomic) NSObject<PXWidgetInteractionDelegate> *widgetInteractionDelegate;
@property (weak, nonatomic) NSObject<PXWidgetUnlockDelegate> *widgetUnlockDelegate;


-(CGFloat)preferredContentHeightForWidth:(CGFloat)arg0 ;
-(void)_dismissWithAnimation:(BOOL)arg0 ;
-(void)_suggestionsDidFinish:(id)arg0 ;
-(void)_updateAndSetDescriptionFont;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)controllerTraitCollectionDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)loadContentData;
-(void)notNowTapped:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)reviewTapped:(id)arg0 ;
-(void)setContentSize:(struct CGSize )arg0 ;
-(void)unloadContentData;
-(void)updateNotNowButton;


@end


#endif