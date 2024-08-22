// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIAPICKERCONTROLLER_H
#define MPMEDIAPICKERCONTROLLER_H

@class UIViewController, NSString;
@protocol MPMusicMediaPickerClientController, MPMediaPickerControllerDelegate, MPMediaPickerRemoteViewLoader;


#import "MPMediaPickerConfiguration.h"

@interface MPMediaPickerController : UIViewController <MPMusicMediaPickerClientController>

 {
    MPMediaPickerConfiguration *_configuration;
}


@property (nonatomic) BOOL allowsPickingMultipleItems;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPMediaPickerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MPMediaPickerRemoteViewLoader> *loader; // ivar: _loader
@property (readonly, nonatomic) NSUInteger mediaTypes;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) BOOL showsCloudItems;
@property (nonatomic) BOOL showsItemsWithProtectedAssets;
@property (readonly) Class superclass;


+(void)preheatMediaPicker;
-(BOOL)_canShowWhileLocked;
-(BOOL)_hasAddedRemoteView;
-(BOOL)pickingForExternalPlayer;
-(BOOL)picksSingleCollectionEntity;
-(BOOL)showsCatalogContent;
-(BOOL)showsLibraryContent;
-(BOOL)supportsUnavailableContent;
-(NSInteger)_preferredModalPresentationStyle;
-(NSInteger)modalPresentationStyle;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)selectionMode;
-(NSUInteger)supportedInterfaceOrientations;
-(id)configuration;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithMediaTypes:(NSUInteger)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSupportedTypeIdentifiers:(id)arg0 selectionMode:(NSInteger)arg1 ;
-(id)playbackArchiveConfiguration;
-(id)typeIdentifiers;
-(unsigned int)watchCompatibilityVersion;
-(void)_addRemoteView;
-(void)_checkLibraryAuthorization;
-(void)_forceDismissal;
-(void)_pickerDidCancel;
-(void)_pickerDidPickItems:(id)arg0 ;
-(void)_pickerDidPickPlaybackArchive:(id)arg0 ;
-(void)_resetRemoteViewController;
-(void)_sharedInit;
-(void)_synchronizeSettings;
-(void)remoteMediaPickerDidCancel;
-(void)remoteMediaPickerDidPickMediaItems:(id)arg0 ;
-(void)remoteMediaPickerDidPickPlaybackArchive:(id)arg0 ;
-(void)setPickingForExternalPlayer:(BOOL)arg0 ;
-(void)setPicksSingleCollectionEntity:(BOOL)arg0 ;
-(void)setPlaybackArchiveConfiguration:(id)arg0 ;
-(void)setShowsCatalogContent:(BOOL)arg0 ;
-(void)setShowsLibraryContent:(BOOL)arg0 ;
-(void)setSupportsUnavailableContent:(BOOL)arg0 ;
-(void)setWatchCompatibilityVersion:(unsigned int)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif