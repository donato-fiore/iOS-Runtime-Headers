// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMEDIASOURCEITEM_H
#define HUMEDIASOURCEITEM_H

@class HFItem, NSString, NAFuture, UIImage, NSSet, NSDictionary;
@protocol MPMediaPickerControllerDelegatePrivate, SSUSoundscapesPickerControllerDelegate, HUMediaPickerDelegate;



@interface HUMediaSourceItem : HFItem <MPMediaPickerControllerDelegatePrivate, SSUSoundscapesPickerControllerDelegate>



@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) BOOL continuousPicker; // ivar: _continuousPicker
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HUMediaPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL failed;
@property (readonly) NSUInteger hash;
@property (readonly) NAFuture *iconFuture; // ivar: _iconFuture
@property (readonly, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (readonly) NSSet *mediaProfileContainers; // ivar: _mediaProfileContainers
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSDictionary *resolveError; // ivar: _resolveError
@property (readonly) NAFuture *resolveFuture; // ivar: _resolveFuture
@property (readonly, nonatomic) BOOL success;
@property (readonly) Class superclass;


+(id)_musicAppUninstallResolveError;
+(id)_musicCatalogPlaybackDisabledResolveErrorFor:(NSUInteger)arg0 ;
+(id)_storeKitErrorResolveErrorFor:(id)arg0 ;
+(id)appleMusicSource;
+(id)soundScapesSource;
-(NSUInteger)_effectiveLoadingStateForSuggestedLoadingState:(NSUInteger)arg0 ;
-(id)_appIconFuture;
-(id)_setupAppleMusicPicker;
-(id)_setupSoundScapesPicker;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)_updateAppleMusicSubscriptionStatusForMediaProfiles:(id)arg0 forTarget:(NSUInteger)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 forServiceName:(id)arg1 ;
-(id)pickerViewController;
-(id)resolveForMediaProfiles:(id)arg0 forTarget:(NSUInteger)arg1 ;
-(void)mediaPicker:(id)arg0 didPickPlaybackArchive:(id)arg1 ;
-(void)mediaPickerCancelled;
-(void)mediaPickerDidCancel:(id)arg0 ;
-(void)mediaPickerDidSelectPlaybackArchive:(id)arg0 withError:(id)arg1 ;


@end


#endif