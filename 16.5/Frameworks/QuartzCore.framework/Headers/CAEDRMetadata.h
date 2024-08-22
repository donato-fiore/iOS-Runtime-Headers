// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAEDRMETADATA_H
#define CAEDRMETADATA_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CAEDRMetadata : NSObject <NSCopying, NSSecureCoding>

 {
    *_CAEDRMetadataPrivate _priv;
}




+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
+(id)HDR10MetadataWithDisplayInfo:(id)arg0 contentInfo:(id)arg1 opticalOutputScale:(float)arg2 ;
+(id)HDR10MetadataWithMinLuminance:(float)arg0 maxLuminance:(float)arg1 opticalOutputScale:(float)arg2 ;
+(id)HLGMetadata;
+(void)setMetadata:(id)arg0 onSurface:(struct __IOSurface *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBT2100HLG;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMasteringDisplayMinNits:(float)arg0 maxNits:(float)arg1 opticalOutputScale:(float)arg2 ;
-(id)initWithSEIMasteringDisplayData:(id)arg0 contentLightLevelData:(id)arg1 ;
-(id)initWithSEIMasteringDisplayData:(id)arg0 contentLightLevelData:(id)arg1 opticalOutputScale:(float)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif