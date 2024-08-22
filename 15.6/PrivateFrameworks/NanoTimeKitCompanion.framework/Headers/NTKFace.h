// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACE_H
#define NTKFACE_H

@class NSHashTable, NSDictionary, NSMutableDictionary, NSString, NSArray, NSURL, NSDate, CLKDevice, NSNumber;
@protocol NSSecureCoding, NSCopying, NTKEditModeMapping, NTKFaceComplicationConfiguration;

#import <Foundation/Foundation.h>

#import "NTKFaceConfiguration.h"
#import "NTKArgonKeyDescriptor.h"
#import "NTKPigmentEditOptionProvider.h"

@interface NTKFace : NSObject <NSSecureCoding, NSCopying, NTKEditModeMapping>

 {
    NSHashTable *_fvcObservers;
    NSHashTable *_observers;
    NSDictionary *_complicationSlotDescriptors;
    NSMutableDictionary *_selectedSlotsByEditMode;
    BOOL _suppressingConfigurationChangeNotifications;
    BOOL _configurationChangedWhileSuppressingNotifications;
    BOOL _configurationWasModifiedForThisDevice;
    BOOL _resourceDirectoryIsOwned;
    NSString *_cachedDefaultName;
    NSArray *_cachedDynamicEditOptions;
    NSString *_cachedResourceDirectorySnapshotKey;
    NSArray *_externalAssets;
    NSString *_analyticsIdentifier;
}


@property (readonly, copy, nonatomic) NSString *analyticsIdentifier;
@property (readonly) NSURL *argon_embeddedOverlayAssetURL;
@property (readonly) NSInteger argon_overlayAssetType;
@property (nonatomic) BOOL beingEdited; // ivar: _beingEdited
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSObject<NTKFaceComplicationConfiguration> *complicationConfiguration; // ivar: _complicationConfiguration
@property (readonly, nonatomic) BOOL complicationExistenceInvalidatesSnapshot;
@property (readonly, nonatomic) NTKFaceConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *dailySnapshotKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly, nonatomic) NSInteger editModeForCustomEditViewController;
@property (readonly, nonatomic) NSArray *editModes;
@property (readonly, nonatomic) BOOL editOptionsPrepared; // ivar: _editOptionsPrepared
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) NSInteger editedState;
@property (copy, nonatomic) NSArray *externalAssets;
@property (readonly, nonatomic) NSInteger faceStyle; // ivar: _faceStyle
@property (nonatomic) BOOL forceUsingLegacyColorOptions; // ivar: _forceUsingLegacyColorOptions
@property (readonly, nonatomic) BOOL hasCompanionEdits;
@property (readonly, nonatomic) BOOL hasGizmoEdits;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLibraryFace; // ivar: _isLibraryFace
@property (readonly, copy, nonatomic) NTKArgonKeyDescriptor *keyDescriptor;
@property (retain, nonatomic) NSDate *lastEditedDate;
@property (nonatomic) NSInteger mostRecentEditMode; // ivar: _mostRecentEditMode
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *numberOfCompanionEdits;
@property (readonly, nonatomic) NSNumber *numberOfGizmoEdits;
@property (nonatomic) NSInteger origin;
@property (readonly, nonatomic) NTKPigmentEditOptionProvider *pigmentOptionProvider; // ivar: _pigmentOptionProvider
@property (readonly, nonatomic) NSString *resourceDirectory; // ivar: _resourceDirectory
@property (readonly, nonatomic, getter=isSingular) BOOL singular;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *unadornedSnapshotKey;
@property (readonly, nonatomic, getter=isUsingConfigurationModifiedForThisDevice) BOOL usingConfigurationModifiedForThisDevice;
@property (readonly, nonatomic, getter=isValidConfigurationToAddToLibrary) BOOL validConfigurationToAddToLibrary;
@property (readonly, nonatomic) BOOL wantsUnadornedSnapshot;


+(BOOL)_complication:(id)arg0 isValidForSlot:(id)arg1 forDevice:(id)arg2 ;
+(BOOL)_customEditMode:(NSInteger)arg0 hasActionForOption:(id)arg1 forDevice:(id)arg2 ;
+(BOOL)_customEditModeDeterminesDynamicSections:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)_customEditModeIsColor:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)_customEditModeIsRows:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)_customEditModeIsShowSeconds:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)_isInternalOnlyForDevice:(id)arg0 ;
+(BOOL)customEditMode:(NSInteger)arg0 hasActionForOption:(id)arg1 forDevice:(id)arg2 ;
+(BOOL)customEditModeDeterminesDynamicSections:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)customEditModeIsColor:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)customEditModeIsRows:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)customEditModeIsShowSeconds:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)isFaceStyleAvailableInternal:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)isRestrictedForDevice:(id)arg0 ;
+(BOOL)needsAppleNeuralEngine;
+(BOOL)supportsExternalAssets;
+(BOOL)supportsSecureCoding;
+(Class)_faceClassForStyle:(NSInteger)arg0 onDevice:(id)arg1 ;
+(NSUInteger)_dateComplicationSlotSupportedStylesForDevice:(id)arg0 ;
+(NSUInteger)maximumRemoteComplicationsOnAnyFace;
+(NSUInteger)maximumRemoteComplicationsOnAnyFaceForDevice:(id)arg0 ;
+(id)PPTBlankFace;
+(id)_complicationSlotDescriptors;
+(id)_complicationTypeMigrations;
+(id)_dateComplicationSlotForDevice:(id)arg0 ;
+(id)_defaultSelectedComplicationSlotForDevice:(id)arg0 ;
+(id)_defaultSelectedSlotForCustomEditMode:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)_initialDefaultComplicationForSlot:(id)arg0 forDevice:(id)arg1 ;
+(id)_linkedResourceRootDirectory;
+(id)_localizedNameOverrideForCustomEditMode:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)_monogramComplicationSlotForDevice:(id)arg0 ;
+(id)_orderedComplicationSlots;
+(id)_richComplicationSlotsForDevice:(id)arg0 ;
+(id)_slotsForCustomEditMode:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)additionalPigmentFaceDomains;
+(id)allPigmentFaceDomains;
+(id)argon_overlayAssetArchiveURL;
+(id)availableInternalFaceDescriptorsForDevice:(id)arg0 ;
+(id)bundledFaceWithIdentifier:(id)arg0 analyticsIdentifier:(id)arg1 forDevice:(id)arg2 initCustomization:(id)arg3 ;
+(id)bundledFaceWithIdentifier:(id)arg0 forDevice:(id)arg1 initCustomization:(id)arg2 ;
+(id)dateSlotForDevice:(id)arg0 ;
+(id)defaultAnalyticsIdentifierForBundleIdentifier:(id)arg0 ;
+(id)defaultFaceFromFaceDescriptor:(id)arg0 forDevice:(id)arg1 ;
+(id)defaultFaceOfStyle:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)defaultFaceOfStyle:(NSInteger)arg0 forDevice:(id)arg1 initCustomization:(id)arg2 ;
+(id)faceWithInstanceDescriptor:(id)arg0 ;
+(id)faceWithJSONObjectRepresentation:(id)arg0 forDevice:(id)arg1 ;
+(id)faceWithJSONObjectRepresentation:(id)arg0 forDevice:(id)arg1 forMigration:(BOOL)arg2 allowFallbackFromInvalidFaceStyle:(BOOL)arg3 ;
+(id)fixedComplicationSlotsForDevice:(id)arg0 ;
+(id)localizedNameForCustomEditMode:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)monogramSlotForDevice:(id)arg0 ;
+(id)pigmentFaceDomain;
+(id)possibleComplicationTypesForSlot:(id)arg0 ;
+(id)richComplicationSlotsForDevice:(id)arg0 ;
+(id)sortableFaceWithAssets:(id)arg0 ;
+(void)enumerateComplicationSlots:(id)arg0 withBlock:(id)arg1 ;
+(void)enumerateComplicationSlotsWithBlock:(id)arg0 ;
+(void)initialize;
-(BOOL)_allowsEditing;
-(BOOL)_applyConfiguration:(id)arg0 allowFailure:(BOOL)arg1 ;
-(BOOL)_complication:(id)arg0 appearsInDailySnapshotForSlot:(id)arg1 ;
-(BOOL)_createResourceDirectorySuitableForSharingAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)_faceGalleryDidUpdateFaceColorForColorEditOptionClass:(Class)arg0 availableHardwareSpecificColorOptions:(id)arg1 availableColorOptions:(id)arg2 ;
-(BOOL)_faceGalleryIsRestricted;
-(BOOL)_hasCustomSwitcherSelectionAction;
-(BOOL)_hasOptionsForCustomEditMode:(NSInteger)arg0 ;
-(BOOL)_option:(id)arg0 isValidForCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(BOOL)_option:(id)arg0 isValidForCustomEditMode:(NSInteger)arg1 slot:(id)arg2 configuration:(id)arg3 ;
-(BOOL)_option:(id)arg0 migratesToValidOption:(*id)arg1 forCustomEditMode:(NSInteger)arg2 slot:(id)arg3 ;
-(BOOL)_sanitizeFaceConfiguration:(*id)arg0 ;
-(BOOL)_shouldHideUI;
-(BOOL)_shouldIncludeResourceDirectoryForSharing;
-(BOOL)_shouldPresentAlertForSharingUnreleasedFace;
-(BOOL)_shouldSanitizeFaceConfigurationWhenAddingSharedFace;
-(BOOL)_snapshotContext:(id)arg0 isStaleRelativeToContext:(id)arg1 ;
-(BOOL)_verifyCompatibilityOfConfiguration:(id)arg0 ;
-(BOOL)applyConfiguration:(id)arg0 ;
-(BOOL)containsEditOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(BOOL)createResourceDirectorySuitableForSharingAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasComplicationsOfType:(NSUInteger)arg0 forSlot:(id)arg1 ;
-(BOOL)hasCustomSwitcherSelectionAction;
-(BOOL)hasPrideEditOptions;
-(BOOL)hasValidConfigurationForDevice:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToFace:(id)arg0 ;
-(BOOL)isFullscreenConfiguration;
-(BOOL)option:(id)arg0 migratesToValidOption:(*id)arg1 forCustomEditMode:(NSInteger)arg2 slot:(id)arg3 ;
-(BOOL)requiresPigmentEditOption;
-(BOOL)sanitizeFaceConfiguration:(*id)arg0 ;
-(BOOL)shouldIncludeResourceDirectoryForSharing;
-(BOOL)shouldPresentAlertForSharingUnreleasedFace;
-(BOOL)shouldSanitizeFaceConfigurationWhenAddingSharedFace;
-(BOOL)slot:(id)arg0 supportsFamiliesOfComplications:(id)arg1 ;
-(BOOL)snapshotContext:(id)arg0 isStaleRelativeToContext:(id)arg1 ;
-(BOOL)supportsPigmentEditOption;
-(BOOL)supportsPigmentUI;
-(Class)_optionClassForCustomEditMode:(NSInteger)arg0 ;
-(Class)_optionClassForCustomEditMode:(NSInteger)arg0 resourceDirectoryExists:(BOOL)arg1 ;
-(Class)editOptionClassFromEditMode:(NSInteger)arg0 resourceDirectoryExists:(BOOL)arg1 ;
-(Class)legacyEditOptionClassFromCustomEditMode:(NSInteger)arg0 resourceDirectoryExists:(BOOL)arg1 ;
-(NSInteger)_customEditModeForUniqueConfiguration;
-(NSInteger)_dynamicEditMode;
-(NSInteger)_editModeForOldEncodingIndex:(NSInteger)arg0 ;
-(NSInteger)dynamicEditMode;
-(NSInteger)preferredComplicationFamilyForComplication:(id)arg0 withSlot:(id)arg1 ;
-(NSUInteger)_collectionTypeForEditMode:(NSInteger)arg0 ;
-(NSUInteger)_indexOfOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(NSUInteger)_numberOfDynamicSections;
-(NSUInteger)_numberOfOptionsForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(NSUInteger)indexOfOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(NSUInteger)numberOfDynamicSections;
-(NSUInteger)numberOfOptionsForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)JSONObjectRepresentation;
-(id)_allComplications;
-(id)_allowedComplicationsOfType:(NSUInteger)arg0 forSlot:(id)arg1 ;
-(id)_cachedResourceDirectorySnapshotKey;
-(id)_complicationMigrationPaths;
-(id)_complicationSlotDescriptors;
-(id)_configurationFromOldEncodingWithCoder:(id)arg0 ;
-(id)_createSharingMetadata;
-(id)_customEditModes;
-(id)_defaultComplicationOfType:(NSUInteger)arg0 forSlot:(id)arg1 ;
-(id)_defaultName;
-(id)_defaultOptionForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_defaultOptionForMissingCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_disabledComplicationTypesIndexSet;
-(id)_editOptionsForEditMode:(NSInteger)arg0 ;
-(id)_faceDescription;
-(id)_faceDescriptionForExternal;
-(id)_faceDescriptionForLibrary;
-(id)_faceDescriptionKey;
-(id)_faceDescriptionKeyForExternal;
-(id)_faceDescriptionKeyForLibrary;
-(id)_faceGalleryCalloutName;
-(id)_initWithFaceStyle:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)_localizedNameForComplicationSlot:(id)arg0 ;
-(id)_localizedStringForExternal:(id)arg0 comment:(id)arg1 ;
-(id)_optionAtIndex:(NSUInteger)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(id)_orderedComplicationSlots;
-(id)_sortedComplicationSlots;
-(id)_uniqueOptionForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 withExistingOptions:(id)arg2 ;
-(id)_validOptionForOption:(id)arg0 mode:(NSInteger)arg1 slot:(id)arg2 configuration:(id)arg3 ;
-(id)addFaceDetailViewController;
-(id)allVisibleComplicationsForCurrentConfiguration;
-(id)allowedComplicationTypesForSlot:(id)arg0 ;
-(id)allowedComplicationTypesFromDescriptors:(id)arg0 slot:(id)arg1 ;
-(id)allowedComplicationsForSlot:(id)arg0 ;
-(id)allowedComplicationsForSlot:(id)arg0 includingComplication:(id)arg1 ;
-(id)complicationForSlot:(id)arg0 ;
-(id)complicationSlotsHiddenByEditOption:(id)arg0 ;
-(id)copyFromGalleryFace;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createSharingMetadata;
-(id)customDataForKey:(id)arg0 ;
-(id)customEditModes;
-(id)deepCopy;
-(id)defaultOptionForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)displayNameForComplicationSlot:(id)arg0 ;
-(id)editOptionThatHidesAllComplications;
-(id)editOptionsForCustomEditModes;
-(id)faceDescription;
-(id)faceDescriptionForExternal;
-(id)faceDescriptionForLibrary;
-(id)faceDescriptor;
-(id)faceSharingName;
-(id)initWithCoder:(id)arg0 ;
-(id)instanceDescriptor;
-(id)libraryDetailViewController;
-(id)nameOfSelectedOptionForCustomEditMode:(NSInteger)arg0 ;
-(id)newDynamicEditOptionCollectionForSection:(NSUInteger)arg0 ;
-(id)optionAtIndex:(NSUInteger)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(id)orderedComplicationSlots;
-(id)possibleComplicationTypesForSlot:(id)arg0 ;
-(id)rankedComplicationFamiliesForSlot:(id)arg0 ;
-(id)replacedOptionWithFulfilledOption:(id)arg0 forEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(id)selectedOptionForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)selectedOptionsForCustomEditModes;
-(id)selectedSlotForEditMode:(NSInteger)arg0 ;
-(id)selectedSlotOptionsForCustomEditMode:(NSInteger)arg0 ;
-(id)slotsForCustomEditMode:(NSInteger)arg0 ;
-(void)_cleanupEditOptions;
-(void)_commonInit;
-(void)_complicationsDidChange;
-(void)_customizeWithJSONDescription:(id)arg0 ;
-(void)_deleteResourceDirectoryIfOwned;
-(void)_handleComplicationChangeNotification;
-(void)_handleSharingMetadata:(id)arg0 ;
-(void)_handleSingleComplicationDidChangeNotification:(id)arg0 ;
-(void)_noteOptionChangedFrom:(id)arg0 to:(id)arg1 forCustomEditMode:(NSInteger)arg2 slot:(id)arg3 ;
-(void)_notifyObserversFaceConfigurationDidChange;
-(void)_notifyObserversFaceResourceDirectoryDidChange;
-(void)_notifyObserversFaceUpgradeOccurred;
-(void)_notifyObserversOptionsDidChangeForEditMode:(NSInteger)arg0 ;
-(void)_notifyObserversThatRespondToSelector:(SEL)arg0 callSelector:(id)arg1 ;
-(void)_performCustomSwitcherSelectionAction;
-(void)_prepareEditOptions;
-(void)_prepareForDeletion;
-(void)_selectDefaultSlots;
-(void)_setFaceGalleryComplicationTypesForSlots:(id)arg0 ;
-(void)_setFaceGalleryComplicationTypesForSlots:(id)arg0 canRepeat:(BOOL)arg1 ;
-(void)_updateComplicationTombstones;
-(void)_updateForResourceDirectoryChange:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)applyDefaultComplicationConfiguration;
-(void)applyDefaultConfiguration;
-(void)applyUniqueConfigurationWithExistingFaces:(id)arg0 ;
-(void)argon_compositedSnapshotWithCompletion:(id)arg0 ;
-(void)argon_notificationContentWithCompletion:(id)arg0 ;
-(void)argon_notificationOverlayImageWithCompletion:(id)arg0 ;
-(void)cleanupEditOptions;
-(void)clearComplicationTombstones;
-(void)clearMetrics;
-(void)companionEditorWithAssets:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToLibrary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateComplicationSlotsWithBlock:(id)arg0 ;
-(void)enumerateCustomEditModesWithBlock:(id)arg0 ;
-(void)enumerateSlotsForCustomEditMode:(NSInteger)arg0 withBlock:(id)arg1 ;
-(void)enumerateVisibleComplicationSlotsForCurrentConfigurationWithBlock:(id)arg0 ;
-(void)handleColorEditOptionsChanged;
-(void)handleSharingMetadata:(id)arg0 ;
-(void)incrementNumberOfCompanionEdits;
-(void)incrementNumberOfGizmoEdits;
-(void)performComplicationTypeMigration;
-(void)performCustomSwitcherSelectionAction;
-(void)prepareEditOptions;
-(void)prepareForDeletion;
-(void)prepareForSharing;
-(void)removeObserver:(id)arg0 ;
-(void)selectOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)selectOptions:(id)arg0 forCustomEditMode:(NSInteger)arg1 ;
-(void)setComplication:(id)arg0 forSlot:(id)arg1 ;
-(void)setComplicationSlotDescriptors:(id)arg0 ;
-(void)setCustomData:(id)arg0 forKey:(id)arg1 ;
-(void)setSelectedSlot:(id)arg0 forEditMode:(NSInteger)arg1 ;
-(void)toggleComplicationChangeObservation:(BOOL)arg0 ;


@end


#endif