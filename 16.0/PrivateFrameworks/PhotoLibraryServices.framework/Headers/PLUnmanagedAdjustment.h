// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUNMANAGEDADJUSTMENT_H
#define PLUNMANAGEDADJUSTMENT_H

@class NSNumber, NSString, NSDate;


#import "PLManagedObject.h"
#import "PLAdditionalAssetAttributes.h"

@interface PLUnmanagedAdjustment : PLManagedObject

@property (retain, nonatomic) NSNumber *adjustmentBaseImageFormat;
@property (retain, nonatomic) NSString *adjustmentFormatIdentifier;
@property (retain, nonatomic) NSString *adjustmentFormatVersion;
@property (nonatomic) unsigned int adjustmentRenderTypes;
@property (retain, nonatomic) NSDate *adjustmentTimestamp;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;
@property (retain, nonatomic) NSString *editorLocalizedName;
@property (retain, nonatomic) NSString *otherAdjustmentsFingerprint;
@property (retain, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint;
@property (retain, nonatomic) NSString *uuid;


+(id)_convertRedEyeCorrection:(id)arg0 withOrientation:(NSInteger)arg1 ;
+(id)_convertRedEyeCorrections:(id)arg0 withOrientation:(NSInteger)arg1 ;
+(id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)arg0 ;
+(id)copyUnmanagedAdjustmentFromSourceAsset:(id)arg0 forPlaceholderAsset:(id)arg1 inLibrary:(id)arg2 error:(*id)arg3 ;
+(id)entityName;
-(BOOL)isSyncableChange;
-(BOOL)supportsCloudUpload;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(void)awakeFromInsert;
-(void)willSave;


@end


#endif