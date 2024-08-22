// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAEDRMETADATA_H
#define CAEDRMETADATA_H


#import <Foundation/Foundation.h>


@interface CAEDRMetadata : NSObject {
    *_CAEDRMetadataPrivate _priv;
}




+(id)HDR10MetadataWithDisplayInfo:(id)arg0 contentInfo:(id)arg1 opticalOutputScale:(float)arg2 ;
+(id)HDR10MetadataWithMinLuminance:(float)arg0 maxLuminance:(float)arg1 opticalOutputScale:(float)arg2 ;
+(id)HLGMetadata;
+(void)setMetadata:(id)arg0 onSurface:(struct __IOSurface *)arg1 ;
-(id)description;
-(id)initWithBT2100HLG;
-(id)initWithMasteringDisplayMinNits:(float)arg0 maxNits:(float)arg1 opticalOutputScale:(float)arg2 ;
-(id)initWithSEIMasteringDisplayData:(id)arg0 contentLightLevelData:(id)arg1 ;
-(id)initWithSEIMasteringDisplayData:(id)arg0 contentLightLevelData:(id)arg1 opticalOutputScale:(float)arg2 ;
-(void)dealloc;


@end


#endif