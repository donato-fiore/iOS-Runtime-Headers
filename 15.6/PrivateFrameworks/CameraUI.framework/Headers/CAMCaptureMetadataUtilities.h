// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMCAPTUREMETADATAUTILITIES_H
#define CAMCAPTUREMETADATAUTILITIES_H


#import <Foundation/Foundation.h>


@interface CAMCaptureMetadataUtilities : NSObject



+(id)metadataFromPanoramaRequest:(id)arg0 ;
+(id)metadataFromRequest:(id)arg0 ;
+(id)preciseCaptureDateFromStillImageMetadata:(id)arg0 ;
+(void)removeUnwantedKeysForPersistenceFromMetadata:(id)arg0 ;


@end


#endif