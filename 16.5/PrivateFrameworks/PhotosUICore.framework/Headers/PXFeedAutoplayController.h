// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDAUTOPLAYCONTROLLER_H
#define PXFEEDAUTOPLAYCONTROLLER_H

@class NSString, NSMapTable;
@protocol PXChangeObserver;

#import <Foundation/Foundation.h>

#import "_PXFeedInlinePlaybackController.h"

@interface PXFeedAutoplayController : NSObject <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _PXFeedInlinePlaybackController *inlinePlaybackController; // ivar: _inlinePlaybackController
@property (nonatomic) BOOL isContainerLayoutVisible;
@property (readonly, nonatomic) NSMapTable *playbackRecordsByItemLayout; // ivar: _playbackRecordsByItemLayout
@property (readonly) Class superclass;


-(id)init;
-(id)initWithContainerLayout:(id)arg0 viewModel:(id)arg1 itemLayoutDesiredPlayStateSetter:(id)arg2 ;
-(void)addItemLayout:(id)arg0 withDisplayAsset:(id)arg1 ;
-(void)containerLayoutVisibleRectDidChange;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)removeItemLayout:(id)arg0 ;


@end


#endif