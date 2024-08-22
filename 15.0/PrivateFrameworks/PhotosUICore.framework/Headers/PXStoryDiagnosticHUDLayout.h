// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYDIAGNOSTICHUDLAYOUT_H
#define PXSTORYDIAGNOSTICHUDLAYOUT_H

@class NSString, NSTimer;
@protocol PXGViewSource, PXChangeObserver;


#import "PXGLayout.h"
#import "PXStoryAnimationController.h"
#import "PXStoryHUDViewConfiguration.h"
#import "PXStoryModel.h"
#import "PXStoryRelatedController.h"
#import "PXStoryViewModel.h"

@interface PXStoryDiagnosticHUDLayout : PXGLayout <PXGViewSource, PXChangeObserver>

 {
    ? _updateFlags;
    unsigned int _viewSpriteIndex;
    unsigned int _badgeSpriteIndex;
    unsigned short _contentVersion;
    BOOL _wantsHUDContentVisible;
}


@property (retain, nonatomic) PXStoryAnimationController *animationController; // ivar: _animationController
@property (readonly, nonatomic) PXStoryHUDViewConfiguration *badgeConfiguration; // ivar: _badgeConfiguration
@property (readonly, nonatomic) PXStoryHUDViewConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXStoryModel *model; // ivar: _model
@property (retain, nonatomic) PXStoryRelatedController *relatedController; // ivar: _relatedController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTimer *timer; // ivar: _timer
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(BOOL)_shouldDisplayContentForHUDType:(NSInteger)arg0 ;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axSpriteIndexes;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(void)_enumerateDiagnosticHUDContentProvidersUsingBlock:(id)arg0 ;
-(void)_invalidateContent;
-(void)_invalidateControllers;
-(void)_invalidateModel;
-(void)_updateContent;
-(void)_updateControllers;
-(void)_updateModel;
-(void)_updateTextInConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)safeAreaInsetsDidChange;
-(void)update;


@end


#endif