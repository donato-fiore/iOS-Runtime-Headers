// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMESSAGESSTACKPLAYBACKCONTROLVIEWMODEL_H
#define PXMESSAGESSTACKPLAYBACKCONTROLVIEWMODEL_H

@class NSString;
@protocol PXMutableMessagesStackPlaybackControlViewModel;


#import "PXObservable.h"
#import "PXGDisplayAssetVideoPresentationController.h"

@interface PXMessagesStackPlaybackControlViewModel : PXObservable <PXMutableMessagesStackPlaybackControlViewModel>



@property (readonly, nonatomic) NSInteger currentItem; // ivar: _currentItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isSettled) BOOL settled; // ivar: _settled
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXGDisplayAssetVideoPresentationController *videoController; // ivar: _videoController




@end


#endif