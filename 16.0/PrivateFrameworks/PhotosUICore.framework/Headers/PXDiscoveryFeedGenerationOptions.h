// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDISCOVERYFEEDGENERATIONOPTIONS_H
#define PXDISCOVERYFEEDGENERATIONOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXDiscoveryFeedGenerationOptions : NSObject <NSCopying>



@property (nonatomic) NSUInteger discoveryRankingMode; // ivar: _discoveryRankingMode
@property (nonatomic) BOOL usePhotoAnalysisdThroughXPC; // ivar: _usePhotoAnalysisdThroughXPC


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;


@end


#endif