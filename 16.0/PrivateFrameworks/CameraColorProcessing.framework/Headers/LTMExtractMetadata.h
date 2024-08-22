// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LTMEXTRACTMETADATA_H
#define LTMEXTRACTMETADATA_H


#import <Foundation/Foundation.h>


@interface LTMExtractMetadata : NSObject



+(BOOL)extractAWBMetadataFromMetadata:(id)arg0 toDriverInput:(struct sRefDriverInputs *)arg1 ;
+(BOOL)extractAWBMetadataFromRawMetadata:(id)arg0 toDriverInput:(struct sRefDriverInputs *)arg1 ;
+(BOOL)extractCCMFromMetadata:(id)arg0 toDriverInput:(struct sRefDriverInputs *)arg1 ;
+(BOOL)extractFrom:(id)arg0 validBufferRect:(id)arg1 isDigitalFlash:(BOOL)arg2 toDriverInput:(struct sRefDriverInputs *)arg3 ltmGeometry:(id)arg4 ;
+(BOOL)extractFromRawMetadata:(id)arg0 toDriverInput:(struct sRefDriverInputs *)arg1 ;
+(void)compareAWBMetadata:(struct sRefDriverInputs *)arg0 withReference:(struct sRefDriverInputs *)arg1 ;
+(void)extractRectanglesFrom:(id)arg0 validBufferRect:(id)arg1 ltmGeometry:(id)arg2 ;


@end


#endif