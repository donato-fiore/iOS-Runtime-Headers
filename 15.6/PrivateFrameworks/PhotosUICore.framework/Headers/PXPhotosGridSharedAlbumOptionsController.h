// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSGRIDSHAREDALBUMOPTIONSCONTROLLER_H
#define PXPHOTOSGRIDSHAREDALBUMOPTIONSCONTROLLER_H

@class NSString, PHAssetCollection;
@protocol PLInvitationRecordsObserver, PXPhotosGridOptionsController, OS_dispatch_queue, PXPhotosGridOptionsControllerDelegate;

#import <Foundation/Foundation.h>


@interface PXPhotosGridSharedAlbumOptionsController : NSObject <PLInvitationRecordsObserver, PXPhotosGridOptionsController>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _hasRegistered;
}


@property (copy, nonatomic) NSString *actionPerformerType; // ivar: _actionPerformerType
@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXPhotosGridOptionsControllerDelegate> *optionsDelegate; // ivar: _optionsDelegate
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *systemIconImageName; // ivar: _systemIconImageName


-(id)init;
-(id)initWithAssetCollection:(id)arg0 ;
-(void)_updateOptions;
-(void)_workQueue_updateOptions;
-(void)dealloc;
-(void)invitationRecordsDidChange:(id)arg0 ;
-(void)preloadOptions;


@end


#endif