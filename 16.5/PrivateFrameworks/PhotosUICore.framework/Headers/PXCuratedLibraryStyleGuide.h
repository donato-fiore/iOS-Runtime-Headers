// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYSTYLEGUIDE_H
#define PXCURATEDLIBRARYSTYLEGUIDE_H

@class NSString;
@protocol PXChangeObserver;


#import "PXObservable.h"
#import "PXExtendedTraitCollection.h"

@interface PXCuratedLibraryStyleGuide : PXObservable <PXChangeObserver>



@property (nonatomic) NSInteger buttonStyle; // ivar: _buttonStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lateralMargin; // ivar: _lateralMargin
@property (nonatomic) UIEdgeInsets secondaryToolbarContentInsets; // ivar: _secondaryToolbarContentInsets
@property (readonly, nonatomic) UIEdgeInsets secondaryToolbarPadding; // ivar: _secondaryToolbarPadding
@property (nonatomic) NSInteger secondaryToolbarPlacement; // ivar: _secondaryToolbarPlacement
@property (nonatomic) BOOL secondaryToolbarRenderedExternally; // ivar: _secondaryToolbarRenderedExternally
@property (nonatomic) CGSize secondaryToolbarSize; // ivar: _secondaryToolbarSize
@property (readonly) Class superclass;
@property (nonatomic) NSInteger toggleAspectFitButtonPlacement; // ivar: _toggleAspectFitButtonPlacement
@property (nonatomic) NSInteger zoomButtonsButtonPlacement; // ivar: _zoomButtonsButtonPlacement


-(id)init;
-(id)initWithExtendedTraitCollection:(id)arg0 ;
-(void)_invalidate;
-(void)_update;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif