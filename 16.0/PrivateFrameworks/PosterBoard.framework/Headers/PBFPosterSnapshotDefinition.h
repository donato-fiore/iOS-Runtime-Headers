// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTERSNAPSHOTDEFINITION_H
#define PBFPOSTERSNAPSHOTDEFINITION_H

@class PBUIImageOnDiskFormat, UITraitCollection, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PBFPosterSnapshotDefinition : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL includesComplications; // ivar: _includesComplications
@property (readonly, nonatomic) BOOL includesHeaderElements; // ivar: _includesHeaderElements
@property (readonly, nonatomic) NSUInteger layerSet; // ivar: _layerSet
@property (readonly, copy, nonatomic) PBUIImageOnDiskFormat *onDiskFormat; // ivar: _onDiskFormat
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic, getter=isUnlocked) BOOL unlocked; // ivar: _unlocked


+(BOOL)urlIsForSnapshot:(id)arg0 ;
+(id)bestDefaultTraitCollection;
+(id)defaultConfigurationDefinitions;
+(id)defaultPreviewDefinitionForPreview:(id)arg0 ;
+(id)defaultPreviewDefinitions;
+(id)editingConfirmationDefinition;
+(id)galleryHeroSnapshotDefinition;
+(id)gallerySnapshotDefinition;
+(id)gallerySnapshotWithComplicationsDefinition;
+(id)switcherFloatingLayerSnapshotDefinition;
+(id)switcherSnapshotDefinition;
+(id)switcherUnlockedSnapshotDefinition;
-(BOOL)_shouldBePersistedOnlyTemporarily;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDefinition:(id)arg0 ;
-(BOOL)urlMatchesOnDiskFormat:(id)arg0 ;
-(NSUInteger)hash;
-(id)compatibleWithTraitCollection:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)imageEncoderForConfiguredProperties:(id)arg0 path:(id)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 includeHeaderElements:(BOOL)arg1 includesComplications:(BOOL)arg2 layerSet:(NSUInteger)arg3 isUnlocked:(BOOL)arg4 uniqueIdentifier:(id)arg5 ;
-(id)initWithSize:(struct CGSize )arg0 includeHeaderElements:(BOOL)arg1 uniqueIdentifier:(id)arg2 ;
-(id)initWithSize:(struct CGSize )arg0 uniqueIdentifier:(id)arg1 ;
-(id)urlForConfiguredProperties:(id)arg0 path:(id)arg1 ;


@end


#endif