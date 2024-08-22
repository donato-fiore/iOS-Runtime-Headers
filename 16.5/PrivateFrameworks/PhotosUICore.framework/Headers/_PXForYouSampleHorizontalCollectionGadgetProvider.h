// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXFORYOUSAMPLEHORIZONTALCOLLECTIONGADGETPROVIDER_H
#define _PXFORYOUSAMPLEHORIZONTALCOLLECTIONGADGETPROVIDER_H

@class NSDate;
@protocol PXForYouRankable;


#import "PXHorizontalCollectionGadgetProvider.h"

@interface _PXForYouSampleHorizontalCollectionGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable>



@property (readonly, nonatomic) NSInteger forYouContentIdentifier;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;


-(id)init;


@end


#endif