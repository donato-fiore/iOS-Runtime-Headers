// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYDIAGNOSTICHUDLAYOUT_H
#define PXSTORYDIAGNOSTICHUDLAYOUT_H

@class NSAttributedString, NSString, NSTimer;
@protocol PXChangeObserver, PXGEntityChangeObserver, PXGStringSource, PXStoryDiagnosticHUDDataSource;


#import "PXGLayout.h"
#import "PXGLoadingStatusComponent.h"
#import "PXStoryAnimationController.h"
#import "PXStoryModel.h"
#import "PXStoryRelatedController.h"

@interface PXStoryDiagnosticHUDLayout : PXGLayout <PXChangeObserver, PXGEntityChangeObserver, PXGStringSource>

 {
    ? _updateFlags;
    PXGLoadingStatusComponent *_loadingStatusComponent;
    BOOL _hasPendingContentUpdate;
    unsigned int _HUDTextSpriteIndex;
    unsigned int _badgeSpriteIndex;
    unsigned short _contentVersion;
    BOOL _wantsHUDContentVisible;
}


@property (retain, nonatomic) NSAttributedString *HUDText; // ivar: _HUDText
@property (retain, nonatomic) PXStoryAnimationController *animationController; // ivar: _animationController
@property (readonly, nonatomic) NSAttributedString *badgeText; // ivar: _badgeText
@property (readonly, nonatomic) NSObject<PXStoryDiagnosticHUDDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXStoryModel *model; // ivar: _model
@property (retain, nonatomic) PXStoryRelatedController *relatedController; // ivar: _relatedController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTimer *timer; // ivar: _timer


-(BOOL)_shouldDisplayContentForHUDType:(NSInteger)arg0 ;
-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axSpriteIndexes;
-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(void)_enumerateDiagnosticHUDContentProvidersUsingBlock:(id)arg0 ;
-(void)_invalidateContent;
-(void)_invalidateControllers;
-(void)_invalidateModel;
-(void)_updateContent;
-(void)_updateControllers;
-(void)_updateModel;
-(void)dealloc;
-(void)entityManager:(id)arg0 componentDidChange:(id)arg1 ;
-(void)entityManagerDidChange;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)safeAreaInsetsDidChange;
-(void)update;


@end


#endif