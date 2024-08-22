// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSHAREDLISTENINGQUEUE_H
#define ICSHAREDLISTENINGQUEUE_H

@class NSString, NSArray, MSVSectionedCollection;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICLiveLink.h"

@interface ICSharedListeningQueue : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger explicitContentState; // ivar: _explicitContentState
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *items;
@property (weak, nonatomic) ICLiveLink *liveLink; // ivar: _liveLink
@property (readonly, nonatomic) NSInteger serverRevision; // ivar: _serverRevision
@property (readonly, copy, nonatomic) MSVSectionedCollection *tracklist; // ivar: _tracklist


-(NSInteger)_afterItemPositionForItemIdentifier:(id)arg0 ;
-(id)_itemForIdentifier:(id)arg0 outIndexPath:(*id)arg1 ;
-(id)_playbackItemProtosForTracklist:(id)arg0 ;
-(id)_tracklistForQueueProto:(id)arg0 ;
-(id)containerForIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProtobuf:(id)arg0 liveLink:(id)arg1 ;
-(id)itemForIdentifier:(id)arg0 ;
-(void)addMediaIdentifiers:(id)arg0 afterItemIdentifier:(id)arg1 ;
-(void)getExpectedCurrentItemWithCompletion:(id)arg0 ;
-(void)insertTracklist:(id)arg0 afterItemIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)insertTracklist:(id)arg0 afterItemIdentifier:(id)arg1 playNowWithPreferredStartIndexPath:(id)arg2 completion:(id)arg3 ;
-(void)moveItemIdentifier:(id)arg0 afterItemIdentifier:(id)arg1 ;
-(void)moveItemIdentifier:(id)arg0 beforeItemIdentifier:(id)arg1 ;
-(void)removeItemIdentifier:(id)arg0 ;
-(void)replaceTracklist:(id)arg0 preferredStartIndexPath:(id)arg1 completion:(id)arg2 ;
-(void)setMediaIdentifiers:(id)arg0 preferredStartIndex:(NSInteger)arg1 ;


@end


#endif