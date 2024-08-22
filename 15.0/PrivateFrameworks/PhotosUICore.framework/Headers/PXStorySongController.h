// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYSONGCONTROLLER_H
#define PXSTORYSONGCONTROLLER_H

@protocol PXStorySongResource;


#import "PXStoryController.h"
#import "PXStoryModel.h"

@interface PXStorySongController : PXStoryController

@property (retain, nonatomic) NSObject<PXStorySongResource> *currentSongResource; // ivar: _currentSongResource
@property (readonly, weak, nonatomic) PXStoryModel *model; // ivar: _model


-(id)initWithModel:(id)arg0 ;
-(id)initWithObservableModel:(id)arg0 ;
-(void)_invalidateCurrentSongResource;
-(void)_updateCurrentSongResource;
-(void)configureUpdater:(id)arg0 ;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif