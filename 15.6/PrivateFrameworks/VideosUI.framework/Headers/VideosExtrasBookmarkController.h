// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOSEXTRASBOOKMARKCONTROLLER_H
#define VIDEOSEXTRASBOOKMARKCONTROLLER_H

@class SBCPlaybackPositionDomain, SBCPlaybackPositionValueService, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VideosExtrasBookmarkController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    SBCPlaybackPositionDomain *_domain;
    SBCPlaybackPositionValueService *_extrasService;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_updateTimeForEntities;
}


@property (nonatomic) CGFloat minimumBookmarkUpdateInterval; // ivar: _minimumBookmarkUpdateInterval


+(id)sharedInstance;
-(BOOL)pushBookmarkForAsset:(id)arg0 bookmarkTime:(CGFloat)arg1 playedToNominalLength:(BOOL)arg2 ;
-(BOOL)pushBookmarkForIdentifier:(id)arg0 bookmarkTime:(CGFloat)arg1 playedToNominalLength:(BOOL)arg2 ;
-(id)init;
-(void)_loadAllBookmarksWithRemainingIdentifiers:(id)arg0 bookmarkTimes:(id)arg1 completionBlock:(id)arg2 ;
-(void)pullBookmarksForAssets:(id)arg0 completionBlock:(id)arg1 ;
-(void)pullBookmarksForIdentifiers:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif