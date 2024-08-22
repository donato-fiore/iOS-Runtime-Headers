// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWCOLLABORATIONCOORDINATOR_H
#define SWCOLLABORATIONCOORDINATOR_H

@class NSCache, NSMutableArray, NSString;
@protocol NSCacheDelegate, SWCollaborationActionHandler;

#import <Foundation/Foundation.h>


@interface SWCollaborationCoordinator : NSObject <NSCacheDelegate>



@property (retain, nonatomic) NSCache *actionCache; // ivar: _actionCache
@property (weak, nonatomic) NSObject<SWCollaborationActionHandler> *actionHandler; // ivar: _actionHandler
@property (nonatomic) BOOL applicationIsReadyForActions; // ivar: _applicationIsReadyForActions
@property (retain, nonatomic) NSMutableArray *cachedUUIDs; // ivar: _cachedUUIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedCoordinator;
-(id)init;
-(void)_cacheAction:(id)arg0 ;
-(void)_sendActionToApp:(id)arg0 ;
-(void)_sendStartCollaborationAction:(id)arg0 ;
-(void)_sendUndeliveredActionsIfNecessary;
-(void)_sendUpdateCollaborationParticipantsAction:(id)arg0 ;
-(void)applicationHasFinishedLaunching;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;
-(void)processIncomingAction:(id)arg0 ;
-(void)processIncomingActions:(id)arg0 ;


@end


#endif