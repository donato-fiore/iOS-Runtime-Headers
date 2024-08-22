// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCDPCCONTAINER_H
#define MCDPCCONTAINER_H

@class NSString, NSMutableDictionary, NSIndexPath;
@protocol MCDPCContainerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MCDPCModel.h"
#import "MCDPCItem.h"

@interface MCDPCContainer : NSObject {
    ? __supportedDelegateCalls;
}


@property (readonly, nonatomic) NSString *appTitle;
@property (nonatomic) NSInteger cachedCount; // ivar: _cachedCount
@property (retain, nonatomic) NSMutableDictionary *cachedIndiciesByIdentifier; // ivar: _cachedIndiciesByIdentifier
@property (retain, nonatomic) NSMutableDictionary *cachedItemsByIndicies; // ivar: _cachedItemsByIndicies
@property (weak, nonatomic) NSObject<MCDPCContainerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, weak, nonatomic) MCDPCModel *model; // ivar: _model
@property (readonly, weak, nonatomic) MCDPCItem *rootItem; // ivar: _rootItem
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialAccessContainerQueue; // ivar: _serialAccessContainerQueue
@property (readonly, nonatomic) NSInteger showCurrentlyPlayingIndex;
@property (readonly, nonatomic) BOOL showPlaybackProgress; // ivar: _showPlaybackProgress
@property (readonly, nonatomic) NSString *title;


-(BOOL)isValidForRefreshedParent:(id)arg0 ;
-(id)_initWithModel:(id)arg0 rootItem:(id)arg1 indexPath:(id)arg2 ;
-(id)cachedIndexByIdentifier:(id)arg0 ;
-(id)cachedItemForIdentifier:(id)arg0 ;
-(id)cachedItemForIndex:(NSInteger)arg0 ;
-(id)containerAtIndex:(NSInteger)arg0 ;
-(id)containerForItem:(id)arg0 ;
-(id)description;
-(void)_contentItemsUpdated:(id)arg0 ;
-(void)_nowPlayingIdentifiersDidChange:(id)arg0 ;
-(void)beginLoadingItem:(id)arg0 completion:(id)arg1 ;
-(void)beginLoadingItemWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)fetchContentWithCompletion:(id)arg0 ;
-(void)getChildrenInRange:(struct _NSRange )arg0 completion:(id)arg1 ;
-(void)getCountOfChildrenWithCompletion:(id)arg0 ;
-(void)getNowPlayingIdentifiersWithCompletion:(id)arg0 ;
-(void)getPlaybackProgressSupportForChildrenWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)refreshWithCompletion:(id)arg0 ;
-(void)setCount:(NSInteger)arg0 ;
-(void)updateRootItemWithCompletion:(id)arg0 ;


@end


#endif