// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PICROPADJUSTMENTCONTROLLER_H
#define PICROPADJUSTMENTCONTROLLER_H



#import "PIAdjustmentController.h"

@interface PICropAdjustmentController : PIAdjustmentController

@property (nonatomic) CGFloat angle;
@property (nonatomic) CGFloat angleRadians;
@property (nonatomic) BOOL autoCropped;
@property (nonatomic) NSInteger constraintHeight;
@property (nonatomic) NSInteger constraintWidth;
@property (nonatomic) CGRect cropRect;
@property (nonatomic, getter=isOriginalCrop) BOOL originalCrop;
@property (nonatomic) CGFloat pitch;
@property (nonatomic) CGFloat pitchRadians;
@property (nonatomic, getter=isSmart) BOOL smart;
@property (nonatomic) CGFloat yaw;
@property (nonatomic) CGFloat yawRadians;


+(id)heightKey;
+(id)originalCropKey;
+(id)smartKey;
+(id)widthKey;
+(id)xOriginKey;
+(id)yOriginKey;
-(BOOL)isCropConstrained;
-(BOOL)isCropIdentityForImageSize:(struct CGSize )arg0 ;
-(BOOL)isGeometryIdentityForImageSize:(struct CGSize )arg0 ;
-(BOOL)isSettingEqual:(id)arg0 forKey:(id)arg1 ;
-(id)initWithAdjustment:(id)arg0 ;
-(id)pasteKeysForMediaType:(NSInteger)arg0 ;
-(id)visualInputKeys;


@end


#endif