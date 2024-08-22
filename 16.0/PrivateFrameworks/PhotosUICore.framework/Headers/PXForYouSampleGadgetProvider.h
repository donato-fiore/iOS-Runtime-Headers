// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFORYOUSAMPLEGADGETPROVIDER_H
#define PXFORYOUSAMPLEGADGETPROVIDER_H

@class NSDate;
@protocol PXForYouRankable;


#import "PXGadgetProvider.h"

@interface PXForYouSampleGadgetProvider : PXGadgetProvider <PXForYouRankable>



@property (readonly, nonatomic) NSInteger forYouContentIdentifier;
@property (nonatomic) BOOL hasLoadedData; // ivar: _hasLoadedData
@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (nonatomic) NSUInteger sampleGadgetType; // ivar: _sampleGadgetType


+(id)defaultForYouSampleGadgetProviders;
+(id)defaultForYouSampleHorizontalCollectionGadgetProvider;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithSampleGadgetType:(NSUInteger)arg0 ;
-(id)initWithSampleGadgetType:(NSUInteger)arg0 minimumHeight:(CGFloat)arg1 ;
-(void)generateGadgets;
-(void)loadDataForGadgets;


@end


#endif