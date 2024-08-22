// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYFADEOVERLAYLAYOUT_H
#define PXSTORYFADEOVERLAYLAYOUT_H

@class NSString;
@protocol PXChangeObserver, PXGSolidColorSource;


#import "PXGLayout.h"
#import "PXStoryModel.h"

@interface PXStoryFadeOverlayLayout : PXGLayout <PXChangeObserver, PXGSolidColorSource>

 {
    ? _updateFlags;
    unsigned int _fadeSpriteIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXStoryModel *model; // ivar: _model
@property (readonly) Class superclass;


-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)initWithModel:(id)arg0 ;
-(void)_invalidateContent;
-(void)_updateContent;
-(void)alphaDidChange;
-(void)didUpdate;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceSizeDidChange;
-(void)update;
-(void)willUpdate;


@end


#endif