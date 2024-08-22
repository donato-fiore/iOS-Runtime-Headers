// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXPHOTOSDETAILSASSETSWIDGETEVENTTRACKER_H
#define _PXPHOTOSDETAILSASSETSWIDGETEVENTTRACKER_H

@class NSString;
@protocol PXPhotosDetailsAssetsWidgetEventTracker, PXChangeObserver;


#import "PXUserInterfaceElementEventTracker.h"

@interface _PXPhotosDetailsAssetsWidgetEventTracker : PXUserInterfaceElementEventTracker <PXPhotosDetailsAssetsWidgetEventTracker, PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDisplayingCuratedContent; // ivar: _isDisplayingCuratedContent
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *visibleState; // ivar: _visibleState
@property (nonatomic) NSInteger visibleStateSignpost; // ivar: _visibleStateSignpost


-(id)init;
-(void)_invalidateVisibleState;
-(void)_logDidEndViewingState:(id)arg0 ;
-(void)_logDidStartViewingState:(id)arg0 ;
-(void)_updateVisibleState;
-(void)logContentViewDidDisappear;
-(void)logContentViewWillAppear;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif