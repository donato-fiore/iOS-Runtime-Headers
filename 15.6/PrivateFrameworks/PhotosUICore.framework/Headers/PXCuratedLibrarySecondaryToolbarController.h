// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYSECONDARYTOOLBARCONTROLLER_H
#define PXCURATEDLIBRARYSECONDARYTOOLBARCONTROLLER_H

@class UIView, NSString;
@protocol PXChangeObserver;

#import <Foundation/Foundation.h>

#import "PXCuratedLibraryStyleGuide.h"
#import "PXUpdater.h"
#import "PXCuratedLibraryViewModel.h"

@interface PXCuratedLibrarySecondaryToolbarController : NSObject <PXChangeObserver>

 {
    BOOL _willUpdate;
}


@property (readonly, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, nonatomic) UIEdgeInsets containerViewAdditionalEdgeInsets;
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) BOOL isAtTop; // ivar: _isAtTop
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (readonly, nonatomic) UIView *secondaryToolbar; // ivar: _secondaryToolbar
@property (nonatomic) BOOL stretched; // ivar: _stretched
@property (readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide; // ivar: _styleGuide
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // ivar: _viewModel


-(id)init;
-(id)initWithContainerView:(id)arg0 viewModel:(id)arg1 ;
-(void)_invalidateContentLayout;
-(void)_invalidatePositioning;
-(void)_invalidateSecondaryToolbarLayout;
-(void)_setNeedsUpdate;
-(void)_updateContentLayout;
-(void)_updatePositioning;
-(void)_updateSecondaryToolbarLayout;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)updateIfNeeded;


@end


#endif