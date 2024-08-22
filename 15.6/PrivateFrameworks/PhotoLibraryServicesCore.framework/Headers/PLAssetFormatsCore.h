// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETFORMATSCORE_H
#define PLASSETFORMATSCORE_H


#import <Foundation/Foundation.h>


@interface PLAssetFormatsCore : NSObject



+(BOOL)formatSizeIsShortSide:(NSInteger)arg0 ;
+(NSInteger)masterThumbnailFormat;
+(NSInteger)wildcatStackFormat;
+(struct CGRect )centeredRectForSourceSize:(struct CGSize )arg0 destinationSize:(struct CGSize )arg1 ;
+(struct CGSize )scaledSizeForSize:(struct CGSize )arg0 format:(NSInteger)arg1 capLength:(BOOL)arg2 ;
+(struct CGSize )sizeForFormat:(NSInteger)arg0 ;


@end


#endif