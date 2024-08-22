// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYFEEDAUTOPLAYCONTROLLER_H
#define PXSTORYFEEDAUTOPLAYCONTROLLER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "_PXStoryFeedInlinePlaybackController.h"

@interface PXStoryFeedAutoplayController : NSObject

@property (readonly, nonatomic) _PXStoryFeedInlinePlaybackController *inlinePlaybackController; // ivar: _inlinePlaybackController
@property (nonatomic) BOOL isContainerLayoutVisible;
@property (readonly, nonatomic) NSMapTable *playbackRecordsByItemLayout; // ivar: _playbackRecordsByItemLayout


-(id)init;
-(id)initWithContainerLayout:(id)arg0 itemLayoutDesiredPlayStateSetter:(id)arg1 ;
-(void)addItemLayout:(id)arg0 withDisplayAsset:(id)arg1 ;
-(void)containerLayoutVisibleRectDidChange;
-(void)removeItemLayout:(id)arg0 ;


@end


#endif