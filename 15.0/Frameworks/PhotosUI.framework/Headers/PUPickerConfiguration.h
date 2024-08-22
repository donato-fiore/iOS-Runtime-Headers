// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPICKERCONFIGURATION_H
#define PUPICKERCONFIGURATION_H

@class NSString, PHAssetCollection, PHPhotoLibrary, NSURL, NSOrderedSet, NSArray;
@protocol NSSecureCoding, NSItemProviderWriting, NSItemProviderReading, PUPickerFilter, PLClientIdentification;

#import <Foundation/Foundation.h>

#import "PUPickerGeneratedFilter.h"

@interface PUPickerConfiguration : NSObject <NSSecureCoding, NSItemProviderWriting, NSItemProviderReading>



@property (readonly, nonatomic) BOOL allowsAssetData;
@property (readonly, nonatomic) BOOL allowsAssetIdentifiers;
@property (readonly, nonatomic) BOOL allowsContextMenuInteraction;
@property (readonly, nonatomic) BOOL allowsContinuousSelection; // ivar: _allowsContinuousSelection
@property (nonatomic) BOOL allowsDownload; // ivar: _allowsDownload
@property (readonly, nonatomic) BOOL allowsEmptySelection;
@property (readonly, nonatomic) BOOL allowsSwipeToSelect;
@property (readonly, nonatomic) BOOL allowsUnlimitedMultipleSelection;
@property (readonly, nonatomic) BOOL canBeginSearch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSObject<PUPickerFilter> *filter; // ivar: _filter
@property (readonly, nonatomic) PUPickerGeneratedFilter *generatedFilter; // ivar: _generatedFilter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLimitedLibraryPicker;
@property (readonly, nonatomic) BOOL isValidConfiguration;
@property (copy, nonatomic) NSString *limitedLibraryClientIdentifier; // ivar: _limitedLibraryClientIdentifier
@property (retain, nonatomic) PHAssetCollection *memoryAssetCollection; // ivar: _memoryAssetCollection
@property (readonly, nonatomic) BOOL onlyReturnsIdentifiers; // ivar: _onlyReturnsIdentifiers
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, copy, nonatomic) NSURL *photoLibraryURL; // ivar: _photoLibraryURL
@property (retain, nonatomic) NSObject<PLClientIdentification> *pickerClientIdentification; // ivar: _pickerClientIdentification
@property (readonly, nonatomic) NSInteger preferredAssetRepresentationMode; // ivar: _preferredAssetRepresentationMode
@property (readonly, copy, nonatomic) NSOrderedSet *preselectedAssetIdentifiers; // ivar: _preselectedAssetIdentifiers
@property (retain, nonatomic) NSOrderedSet *preselectedAssetObjectIDs; // ivar: _preselectedAssetObjectIDs
@property (nonatomic) BOOL requiresPickingConfirmation; // ivar: _requiresPickingConfirmation
@property (readonly, nonatomic) NSInteger selection; // ivar: _selection
@property (readonly, nonatomic) NSInteger selectionLimit; // ivar: _selectionLimit
@property (readonly, nonatomic) BOOL shouldRequestCurrentIfPossible;
@property (nonatomic) BOOL showsFileSizePicker; // ivar: _showsFileSizePicker
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesEmbeddedMessagesLayout; // ivar: _usesEmbeddedMessagesLayout
@property (nonatomic) BOOL usesMemoriesLayout; // ivar: _usesMemoriesLayout
@property (readonly, nonatomic) BOOL usesSelectionCoordinator;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(BOOL)supportsSecureCoding;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPHPickerConfiguration:(id)arg0 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)legacy_overrideGeneratedFilter:(id)arg0 ;


@end


#endif