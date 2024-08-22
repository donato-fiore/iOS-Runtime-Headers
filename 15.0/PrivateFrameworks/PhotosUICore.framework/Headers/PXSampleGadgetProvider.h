// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSAMPLEGADGETPROVIDER_H
#define PXSAMPLEGADGETPROVIDER_H



#import "PXGadgetProvider.h"

@interface PXSampleGadgetProvider : PXGadgetProvider

@property (nonatomic) BOOL hasLoadedData; // ivar: _hasLoadedData
@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (nonatomic) NSUInteger sampleGadgetType; // ivar: _sampleGadgetType


+(id)defaultSampleGadgetProviders;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithSampleGadgetType:(NSUInteger)arg0 ;
-(id)initWithSampleGadgetType:(NSUInteger)arg0 minimumHeight:(CGFloat)arg1 ;
-(void)generateGadgets;
-(void)loadDataForGadgets;


@end


#endif