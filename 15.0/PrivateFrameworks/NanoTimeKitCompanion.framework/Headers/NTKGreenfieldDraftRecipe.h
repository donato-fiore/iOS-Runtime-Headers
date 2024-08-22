// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKGREENFIELDDRAFTRECIPE_H
#define NTKGREENFIELDDRAFTRECIPE_H

@class NSMutableDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NTKFace.h"

@interface NTKGreenfieldDraftRecipe : NSObject <NSSecureCoding>

 {
    NTKFace *_originalface;
    NSMutableDictionary *_slotToSampleTemplateMapping;
    NSMutableDictionary *_slotToItemIdMapping;
    NSMutableDictionary *_complicationUniqueIdentifierToOptionTypeMapping;
    NSMutableDictionary *_slotToAppIdentifierMapping;
}


@property (readonly, nonatomic) NTKFace *faceForSharing;
@property (readonly, nonatomic) BOOL hasComplicationSharingOptions;
@property (copy, nonatomic) NSString *tempPathOverride; // ivar: _tempPathOverride


+(BOOL)supportsSecureCoding;
+(id)descriptionFromComplicationOption:(NSUInteger)arg0 ;
+(id)templateForComplicationAtSlot:(id)arg0 face:(id)arg1 ;
+(id)titleFromComplicationOption:(NSUInteger)arg0 ;
-(BOOL)_shouldIncludeMetadataForSlot:(id)arg0 ;
-(BOOL)canShareTemplate:(id)arg0 slot:(id)arg1 ;
-(NSUInteger)optionForComplicationUniqueIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFace:(id)arg0 ;
-(id)slotToBundleIdMapping;
-(id)slotToItemIdMapping;
-(id)slotToSampleTemplateMapping;
-(id)sortedComplicationSharingOptions;
-(void)_buildOptionTypeMapping;
-(void)_buildSlotToItemIdAndBundleIdMapping;
-(void)_buildSlotToSampleTemplateMapping;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setComplicationOption:(NSUInteger)arg0 forComplicationUniqueIdentifier:(id)arg1 ;


@end


#endif