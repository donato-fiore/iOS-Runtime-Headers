// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUFACERECOGNITIONADDPERSONITEMMANAGER_H
#define HUFACERECOGNITIONADDPERSONITEMMANAGER_H

@class HFItemManager, HMCameraProfile, HMFaceClassification, NAFuture, HFHomePersonItemProvider, HMHome, HMPersonManager, HFPhotosPersonItemProvider, HMCameraSignificantEvent;



@interface HUFaceRecognitionAddPersonItemManager : HFItemManager

@property (readonly, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (readonly, nonatomic) HMFaceClassification *faceClassification;
@property (readonly, nonatomic) NAFuture *faceCropImageFuture;
@property (readonly, nonatomic) HFHomePersonItemProvider *homePersonItemProvider; // ivar: _homePersonItemProvider
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (readonly, nonatomic) HMPersonManager *personManager; // ivar: _personManager
@property (readonly, nonatomic) HFPhotosPersonItemProvider *photosPersonItemProvider; // ivar: _photosPersonItemProvider
@property (readonly, nonatomic) HMCameraSignificantEvent *significantEvent; // ivar: _significantEvent


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)associateFaceClassificationWithExistingPerson:(id)arg0 ;
-(id)associateFaceClassificationWithNewPersonNamed:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithSignificantEvent:(id)arg0 home:(id)arg1 delegate:(id)arg2 ;


@end


#endif