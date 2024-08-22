// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHIGHLIGHTMANAGER_H
#define WBSHIGHLIGHTMANAGER_H

@class SLHighlightCenter, NSCache, NSMutableArray, NSMutableDictionary, NSString, NSArray;
@protocol SLHighlightCenterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSHighlightManager : NSObject <SLHighlightCenterDelegate>

 {
    SLHighlightCenter *_highlightCenter;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSCache *_linkDataCache;
    NSMutableArray *_deferredAttributionPresenters;
    NSMutableDictionary *_highlightToAttributionViewMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, setter=_setHighlights:) NSArray *highlights; // ivar: _highlights
@property (readonly, nonatomic) BOOL isFetchingHighlights; // ivar: _isFetchingHighlights
@property (readonly) Class superclass;


-(id)attributionViewForHighlight:(id)arg0 ;
-(id)init;
-(void)_didFetchHighlights;
-(void)_enableNewSLAttributionViewAppereance;
-(void)_handleRemovalOfHighlights:(id)arg0 ;
-(void)_showBannerIfNeededForPresenter:(id)arg0 ;
-(void)_updateAttributionViews;
-(void)_updateHighlights;
-(void)fetchMetadataForHighlight:(id)arg0 completionHandler:(id)arg1 ;
-(void)highlightCenter:(id)arg0 didRemoveHighlights:(id)arg1 ;
-(void)highlightCenterDidAddHighlights:(id)arg0 ;
-(void)loadLinkMetadataForMessageWithGUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendFeedbackForHighlight:(id)arg0 withType:(NSUInteger)arg1 inPrivateBrowsing:(BOOL)arg2 ;
-(void)updateHighlightForAttributionPresenter:(id)arg0 ;


@end


#endif