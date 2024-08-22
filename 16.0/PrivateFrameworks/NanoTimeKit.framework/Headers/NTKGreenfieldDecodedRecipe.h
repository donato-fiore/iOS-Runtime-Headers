// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKGREENFIELDDECODEDRECIPE_H
#define NTKGREENFIELDDECODEDRECIPE_H

@class NSDictionary, NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NTKFace.h"

@interface NTKGreenfieldDecodedRecipe : NSObject <NSSecureCoding>

 {
    NSDictionary *_complicationSlotToTemplateMapping;
    NSDictionary *_complicationSlotToTemplateOverrideMapping;
    BOOL _isUsingModifiedComplicationsSet;
}


@property (readonly, nonatomic) NSDictionary *complicationSlotToBundleIdMapping; // ivar: _complicationSlotToBundleIdMapping
@property (readonly, nonatomic) NSDictionary *complicationSlotToItemIdMapping; // ivar: _complicationSlotToItemIdMapping
@property (readonly, nonatomic) NSDictionary *complicationSlotToNameMapping; // ivar: _complicationSlotToNameMapping
@property (readonly, nonatomic) NSDictionary *complicationSlotToTemplateMapping;
@property (readonly, nonatomic) NSString *noBorderFacePreviewImagePath; // ivar: _noBorderFacePreviewImagePath
@property (readonly, nonatomic) NSNumber *senderBoxedDeviceSize; // ivar: _senderBoxedDeviceSize
@property (readonly, nonatomic) BOOL wasModifiedForThisDevice;
@property (readonly, nonatomic) NTKFace *watchFace; // ivar: _watchFace


+(BOOL)supportsSecureCoding;
-(BOOL)_template:(id)arg0 isUnsupportedForComplication:(id)arg1 ;
-(id)_overrideTemplateForComplication:(id)arg0 atSlot:(id)arg1 face:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWatchFace:(id)arg0 complicationSlotToTemplateMapping:(id)arg1 complicationSlotToItemIdMapping:(id)arg2 complicationSlotToNameMapping:(id)arg3 complicationSlotToBundleIdMapping:(id)arg4 isUsingModifiedComplicationsSet:(BOOL)arg5 noBorderFacePreviewImagePath:(id)arg6 senderBoxedDeviceSize:(id)arg7 ;
-(void)collectOverrideTemplates;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif