// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHIGHLIGHTMANAGER_H
#define WBSHIGHLIGHTMANAGER_H

@class SLHighlightCenter, NSCache, NSMutableArray, NSString, NSArray;
@protocol SLHighlightCenterDelegate;

#import <Foundation/Foundation.h>


@interface WBSHighlightManager : NSObject <SLHighlightCenterDelegate>

 {
    SLHighlightCenter *_highlightCenter;
    NSCache *_linkDataCache;
    NSMutableArray *_deferredAttributionPresenters;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, setter=_setHighlights:) NSArray *highlights; // ivar: _highlights
@property (readonly, nonatomic, getter=_isInterstellarEnabledForSafari) BOOL interstellarEnabledForSafari;
@property (readonly, nonatomic) BOOL isFetchingHighlights; // ivar: _isFetchingHighlights
@property (readonly) Class superclass;


+(BOOL)isHighlightCenterEnabled;
-(id)init;
-(void)_didFetchHighlights;
-(void)_enableNewSLAttributionViewAppereance;
-(void)_handleRemovalOfHighlights:(id)arg0 ;
-(void)_showBannerIfNeededForPresenter:(id)arg0 ;
-(void)_updateHighlights;
-(void)fetchMetadataForHighlight:(id)arg0 completionHandler:(id)arg1 ;
-(void)highlightCenter:(id)arg0 didRemoveHighlights:(id)arg1 ;
-(void)highlightCenterDidAddHighlights:(id)arg0 ;
-(void)highlightCenterSettingsEnablementHasChanged:(id)arg0 ;
-(void)loadLinkMetadataForMessageWithGUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendFeedbackForHighlight:(id)arg0 withType:(NSUInteger)arg1 inPrivateBrowsing:(BOOL)arg2 ;
-(void)updateAttributionViews;
-(void)updateHighlightForAttributionPresenter:(id)arg0 ;


@end


#endif