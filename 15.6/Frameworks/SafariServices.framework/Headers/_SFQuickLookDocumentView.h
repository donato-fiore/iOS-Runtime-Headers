// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFQUICKLOOKDOCUMENTVIEW_H
#define _SFQUICKLOOKDOCUMENTVIEW_H

@class UIScrollView, UIView, NSArray, UIStackView, NSLayoutConstraint, NSString;
@protocol UIDragInteractionDelegate, UIDragInteractionDelegate_Private, _SFQuickLookDocumentViewDelegate;


#import "_SFQuickLookDocumentInfoView.h"

@interface _SFQuickLookDocumentView : UIScrollView <UIDragInteractionDelegate, UIDragInteractionDelegate_Private>

 {
    UIView *_wrapperView;
    UIView *_contentView;
    _SFQuickLookDocumentInfoView *_documentInfoView;
    NSArray *_actionButtons;
    UIStackView *_actionButtonsView;
    NSLayoutConstraint *_documentInfoViewBottomAnchorConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<_SFQuickLookDocumentViewDelegate> *quickLookDocumentViewDelegate; // ivar: _quickLookDocumentViewDelegate
@property (readonly) Class superclass;


-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )frameForButtonAtIndex:(NSUInteger)arg0 ;
-(void)_actionButtonTapped:(id)arg0 ;
-(void)_configureOrientationBasedConstraints:(NSInteger)arg0 ;
-(void)_setUpLayoutConstraints;
-(void)_updatePropertiesDefinedByContentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateActionTitles:(id)arg0 ;
-(void)updateDocumentFileName:(id)arg0 ;
-(void)updateDocumentFileSize:(id)arg0 ;
-(void)updateDocumentFileType:(id)arg0 ;
-(void)updateDocumentIcon:(id)arg0 ;


@end


#endif