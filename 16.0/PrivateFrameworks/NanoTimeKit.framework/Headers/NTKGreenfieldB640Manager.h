// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKGREENFIELDB640MANAGER_H
#define NTKGREENFIELDB640MANAGER_H

@class NSString, NSArray, NSTimer, NSError, NSBundle, ProductKitCatalog, NSUUID;
@protocol NTKFaceCollectionObserver, OS_dispatch_queue, NTKGreenfieldB640WatchFacesManagerDelegate;

#import <Foundation/Foundation.h>

#import "NTKGreenfieldB640Model.h"
#import "NTKPersistentFaceCollection.h"
#import "NTKFace.h"
#import "NTKGreenfieldDecodedRecipe.h"

@interface NTKGreenfieldB640Manager : NSObject <NTKFaceCollectionObserver>

 {
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_scannedCodeIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSArray *_watchFacesModels;
    NTKGreenfieldB640Model *_greenfieldB640Model;
    NSArray *_watchFacesDecodeErrors;
    NTKPersistentFaceCollection *_library;
    NSTimer *_libraryTimeoutTimer;
    NSUInteger _state;
    NSError *_error;
    NTKFace *_watchFaceAddedToLibrary;
    NSString *_bandImagePath;
    NSBundle *_bandImageBundle;
    NSUInteger _libraryState;
    NTKGreenfieldDecodedRecipe *_selectedRecipe;
    ProductKitCatalog *_productKitCatalog;
}


@property (readonly, nonatomic) NSUUID *addedFaceID; // ivar: _addedFaceID
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKGreenfieldB640WatchFacesManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)bandVariantForPairedDevice;
-(id)_analyticsExitScreenNameForCurrentState;
-(id)_analyticsModelForAddFaceEventsForWatchFace:(id)arg0 ;
-(id)init;
-(void)_cancelLibraryTimeoutTimer;
-(void)_decodeWatchFacesUrls:(id)arg0 ;
-(void)_handleB640WatchFaceManagerDidFinishWithError:(id)arg0 watchFaceModels:(id)arg1 ;
-(void)_handleProductKitUrl:(id)arg0 ;
-(void)_libraryTimeoutTimerFired;
-(void)_moveToDecodeStateCompletedIfPossible;
-(void)_setLibraryState:(NSUInteger)arg0 ;
-(void)_startLibraryTimeoutTimer;
-(void)_updateComplicationForDecodedRecipe:(id)arg0 installedItemIds:(id)arg1 installedBundleIds:(id)arg2 ;
-(void)decodeUrl:(id)arg0 sourceApplicationBundleIdentifier:(id)arg1 ;
-(void)faceCollectionDidLoad:(id)arg0 ;
-(void)handleAddToMyFacesAction;
-(void)handleDidExitGreenfieldB640Flow;
-(void)handleWatchFaceSelectedActionWithSelectedIndex:(NSInteger)arg0 ;


@end


#endif