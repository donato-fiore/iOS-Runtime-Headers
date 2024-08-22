// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFORYOUFOOTERGADGETPROVIDER_H
#define PXFORYOUFOOTERGADGETPROVIDER_H



#import "PXGadgetProvider.h"

@interface PXForYouFooterGadgetProvider : PXGadgetProvider

@property (nonatomic) BOOL attemptedToGenerateGadgets; // ivar: _attemptedToGenerateGadgets
@property (nonatomic) NSInteger footerState; // ivar: _footerState


-(BOOL)_didProcessContentOvernight;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)_peaceMemoryFetchOptions;
-(void)_generateFooterGadget;
-(void)_handleFaceProgressCompletionWithCountDictionary:(id)arg0 ;
-(void)_handleSceneProgressCompletionWithCount:(NSUInteger)arg0 ;
-(void)generateGadgets;
-(void)loadDataForGadgets;


@end


#endif