// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMESSAGESRECENTPHOTOSGADGETPROVIDER_H
#define PXMESSAGESRECENTPHOTOSGADGETPROVIDER_H

@class UIViewController<PXPhotoLibraryPresenting>;


#import "PXGadgetProvider.h"

@interface PXMessagesRecentPhotosGadgetProvider : PXGadgetProvider

@property (nonatomic) CGFloat preferredHeight; // ivar: _preferredHeight
@property (retain, nonatomic) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController; // ivar: _recentPhotosViewController


-(NSUInteger)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(void)loadDataForGadgets;


@end


#endif