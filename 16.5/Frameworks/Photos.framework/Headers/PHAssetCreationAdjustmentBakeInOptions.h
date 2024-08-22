// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASSETCREATIONADJUSTMENTBAKEINOPTIONS_H
#define PHASSETCREATIONADJUSTMENTBAKEINOPTIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PHAssetCreationAdjustmentBakeInOptions : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL flattenLivePhotoToStillIfNeeded; // ivar: _flattenLivePhotoToStillIfNeeded
@property (nonatomic) BOOL shouldBakeInIfAdjustedByThirdParty; // ivar: _shouldBakeInIfAdjustedByThirdParty
@property (nonatomic) BOOL shouldBakeInIfContainsPenultimateResources; // ivar: _shouldBakeInIfContainsPenultimateResources
@property (nonatomic) BOOL shouldBakeInIfCropped; // ivar: _shouldBakeInIfCropped
@property (nonatomic) BOOL shouldBakeInIfLivePhotoMuted; // ivar: _shouldBakeInIfLivePhotoMuted
@property (nonatomic) BOOL shouldBakeInIfLivePhotoPlaybackDisabled; // ivar: _shouldBakeInIfLivePhotoPlaybackDisabled
@property (nonatomic) BOOL shouldBakeInIfPortraitDepthEffectEnabled; // ivar: _shouldBakeInIfPortraitDepthEffectEnabled
@property (nonatomic) BOOL shouldBakeInIfTimelineTrimmed; // ivar: _shouldBakeInIfTimelineTrimmed


+(BOOL)supportsSecureCoding;
+(id)adjustmentBakeInOptionsForPublishingOriginals;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDict:(id)arg0 ;
-(id)plRepresentation;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif