// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUONEUPMERGEDVIDEOPROVIDER_H
#define PUONEUPMERGEDVIDEOPROVIDER_H

@class PXObservable, NSString, NSError, ISLivePhotoPlayer;
@protocol PUBrowsingViewModelChangeObserver, PXChangeObserver;


#import "PUBrowsingViewModel.h"
#import "PUMergedLivePhotosVideoRequest.h"
#import "PUMergedLivePhotosVideo.h"

@interface PUOneUpMergedVideoProvider : PXObservable <PUBrowsingViewModelChangeObserver, PXChangeObserver>



@property (readonly, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (retain, nonatomic) PUMergedLivePhotosVideoRequest *currentRequest; // ivar: _currentRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ISLivePhotoPlayer *livePhotoPlayer; // ivar: _livePhotoPlayer
@property (retain, nonatomic) PUMergedLivePhotosVideo *mergedVideo; // ivar: _mergedVideo
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithBrowsingViewModel:(id)arg0 ;
-(id)mutableChangeObject;
-(void)_handleRequestChanges:(id)arg0 ;
-(void)_handleViewModelChanges;
-(void)_updateLivePhotoPlayerItem;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif