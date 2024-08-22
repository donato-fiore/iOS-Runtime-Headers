// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIEWREUSEMANAGER_H
#define VIEWREUSEMANAGER_H

@class NSMutableSet, NSArray;
@protocol ViewReuseManagerDelegate;

#import <Foundation/Foundation.h>


@interface ViewReuseManager : NSObject {
    NSMutableSet *_reusableViews;
    NSMutableSet *_viewsPendingRecycling;
    NSInteger _firstPreviouslyVisibleRepresentedObjectIndex;
}


@property (nonatomic) BOOL alwaysSendPrepareForReuse; // ivar: _alwaysSendPrepareForReuse
@property (weak, nonatomic) NSObject<ViewReuseManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) Class reusableViewClass; // ivar: _reusableViewClass
@property (readonly, copy, nonatomic) NSArray *trackedViews; // ivar: _trackedViews


-(id)init;
-(id)initWithReusableViewClass:(Class)arg0 ;
-(id)makeView;
-(void)_addTrackedViewForRepresentedObjectAtIndex:(NSUInteger)arg0 ;
-(void)_didReceiveMemoryWarning:(id)arg0 ;
-(void)_recycleView:(id)arg0 ;
-(void)_recycleViewsInCollection:(id)arg0 ;
-(void)dealloc;
-(void)insertView:(id)arg0 inTrackedViewsAtIndex:(NSInteger)arg1 ;
-(void)recycleView:(id)arg0 ;
-(void)removeViewFromTrackedViews:(id)arg0 ;
-(void)updateTrackedViewsForRepresentedObjectsInRange:(struct _NSRange )arg0 ;


@end


#endif