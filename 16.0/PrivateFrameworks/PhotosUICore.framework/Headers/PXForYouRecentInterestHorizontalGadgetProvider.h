// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFORYOURECENTINTERESTHORIZONTALGADGETPROVIDER_H
#define PXFORYOURECENTINTERESTHORIZONTALGADGETPROVIDER_H

@class NSDate;
@protocol PXForYouRankable;


#import "PXHorizontalCollectionGadgetProvider.h"

@interface PXForYouRecentInterestHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable>



@property (readonly, nonatomic) NSInteger forYouContentIdentifier;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;


-(id)initWithContentGadgetProvider:(id)arg0 title:(id)arg1 ;


@end


#endif