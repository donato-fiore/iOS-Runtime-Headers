// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFAIRDROPBROWSER_H
#define SFAIRDROPBROWSER_H

@class NSMutableDictionary, NSArray, NSString;
@protocol SFAirDropBrowserBatchDelegate, SFAirDropBrowserDelegate, SFAirDropBrowserDiffableDelegate;

#import <Foundation/Foundation.h>


@interface SFAirDropBrowser : NSObject {
    *__SFBrowser _browser;
    NSMutableDictionary *_nodes;
    BOOL _shouldDeliverEmptyUpdates;
}


@property (weak) NSObject<SFAirDropBrowserBatchDelegate> *batchDelegate; // ivar: _batchDelegate
@property (weak) NSObject<SFAirDropBrowserDelegate> *delegate; // ivar: _delegate
@property (weak) NSObject<SFAirDropBrowserDiffableDelegate> *diffableDelegate; // ivar: _diffableDelegate
@property (readonly, nonatomic) NSMutableDictionary *nodeIDToNode; // ivar: _nodeIDToNode
@property (readonly, nonatomic) NSArray *people; // ivar: _people
@property (copy, nonatomic) NSArray *photosAssetIDs; // ivar: _photosAssetIDs
@property (copy, nonatomic) NSString *sendingAppBundleID; // ivar: _sendingAppBundleID
@property (copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (copy, nonatomic) NSArray *urlsBeingShared; // ivar: _urlsBeingShared


-(id)init;
-(void)dealloc;
-(void)getChangedIndexesForClientPeopleList:(id)arg0 withCompletion:(id)arg1 ;
-(void)handleBrowserCallBack;
-(void)pause;
-(void)resume;
-(void)start;
-(void)stop;
-(void)updateDiscoveredPeople;


@end


#endif