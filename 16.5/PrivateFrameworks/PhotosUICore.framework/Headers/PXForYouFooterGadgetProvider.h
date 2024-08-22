// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFORYOUFOOTERGADGETPROVIDER_H
#define PXFORYOUFOOTERGADGETPROVIDER_H

@class NSDate;
@protocol PXForYouRankable;


#import "PXGadgetProvider.h"

@interface PXForYouFooterGadgetProvider : PXGadgetProvider <PXForYouRankable>



@property (nonatomic) BOOL attemptedToGenerateGadgets; // ivar: _attemptedToGenerateGadgets
@property (nonatomic) NSInteger footerState; // ivar: _footerState
@property (readonly, nonatomic) NSInteger forYouContentIdentifier;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;


-(BOOL)_didProcessContentOvernight;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)_peaceMemoryFetchOptions;
-(void)_generateFooterGadget;
-(void)_handleFaceProgressCompletionWithFacesCountDictionary:(id)arg0 ;
-(void)_handleSceneProgressCompletionWithUnprocessedCount:(NSUInteger)arg0 ;
-(void)generateGadgets;
-(void)loadDataForGadgets;


@end


#endif