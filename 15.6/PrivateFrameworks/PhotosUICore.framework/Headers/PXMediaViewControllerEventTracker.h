// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMEDIAVIEWCONTROLLEREVENTTRACKER_H
#define PXMEDIAVIEWCONTROLLEREVENTTRACKER_H

@class NSString, NSMutableDictionary;
@protocol PXMediaViewControllerEventTracker, PXChangeObserver, PXDisplayAsset, PXDisplayAssetCollection;


#import "PXViewControllerEventTracker.h"
#import "_PXTrackedMediaRecord.h"

@interface PXMediaViewControllerEventTracker : PXViewControllerEventTracker <PXMediaViewControllerEventTracker, PXChangeObserver>

 {
    BOOL _didInvalidateCurrentlyVisibleMediaOnce;
}


@property (retain, nonatomic) _PXTrackedMediaRecord *currentlyVisibleMediaRecord; // ivar: _currentlyVisibleMediaRecord
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<PXDisplayAsset> *displayedAsset; // ivar: _displayedAsset
@property (retain, nonatomic) NSObject<PXDisplayAssetCollection> *displayedAssetCollection; // ivar: _displayedAssetCollection
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *lastVisibleMedia; // ivar: _lastVisibleMedia
@property (nonatomic) NSInteger mediaViewedSignpost; // ivar: _mediaViewedSignpost
@property (copy, nonatomic) NSMutableDictionary *payload;
@property (nonatomic) NSInteger specificMediaViewedSignpost; // ivar: _specificMediaViewedSignpost
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *viewName; // ivar: _viewName


-(id)init;
-(id)initWithViewName:(id)arg0 ;
-(void)_invalidateCurrentlyVisibleMedia;
-(void)_updateCurrentlyVisibleMedia;
-(void)logDidEndViewingMedia:(id)arg0 mediaKind:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)logDidStartViewingMedia:(id)arg0 mediaKind:(NSInteger)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif