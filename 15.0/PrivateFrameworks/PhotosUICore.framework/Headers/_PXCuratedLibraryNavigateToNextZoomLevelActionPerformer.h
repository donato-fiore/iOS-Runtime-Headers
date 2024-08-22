// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXCURATEDLIBRARYNAVIGATETONEXTZOOMLEVELACTIONPERFORMER_H
#define _PXCURATEDLIBRARYNAVIGATETONEXTZOOMLEVELACTIONPERFORMER_H



#import "PXCuratedLibraryActionPerformer.h"
#import "PXGSpriteReference.h"
#import "PXGLayout.h"

@interface _PXCuratedLibraryNavigateToNextZoomLevelActionPerformer : PXCuratedLibraryActionPerformer

@property (readonly, nonatomic) PXGSpriteReference *hitSpriteReference; // ivar: _hitSpriteReference
@property (readonly, nonatomic) PXGLayout *layout; // ivar: _layout


-(id)initWithActionType:(id)arg0 viewModel:(id)arg1 ;
-(id)initWithActionType:(id)arg0 viewModel:(id)arg1 layout:(id)arg2 hitSpriteReference:(id)arg3 ;
-(void)performUserInteractionTask;


@end


#endif