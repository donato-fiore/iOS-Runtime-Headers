// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PICINEMATICVIDEOUTILITIES_H
#define PICINEMATICVIDEOUTILITIES_H


#import <Foundation/Foundation.h>


@interface PICinematicVideoUtilities : NSObject



+(BOOL)assetIsCinematicVideo:(id)arg0 ;
+(BOOL)currentSystemCanRenderAsset:(id)arg0 ;
+(NSUInteger)currentSystemRenderingVersion;
+(NSUInteger)renderingVersionFromAsset:(id)arg0 error:(*id)arg1 ;
+(id)cinematicMetadataFromAsset:(id)arg0 ;


@end


#endif