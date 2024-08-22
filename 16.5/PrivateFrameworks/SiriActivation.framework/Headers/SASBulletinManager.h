// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASBULLETINMANAGER_H
#define SASBULLETINMANAGER_H

@class BBObserver, NSMutableDictionary, NSString;
@protocol BBObserverDelegate, SASBulletinManagerDelegate;

#import <Foundation/Foundation.h>

#import "SASBulletinCache.h"

@interface SASBulletinManager : NSObject <BBObserverDelegate>

 {
    BBObserver *_observer;
    SASBulletinCache *_bulletinCache;
    NSMutableDictionary *_bulletinsOnLockScreen;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SASBulletinManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_displayNameForBulletin:(id)arg0 ;
-(id)allBulletins;
-(id)bulletinForIdentifier:(id)arg0 ;
-(id)bulletinsOnLockScreen;
-(id)init;
-(void)_bulletinsDidChange;
-(void)_setupObserver;
-(void)addBulletinCompletionWithBulletin:(id)arg0 forFeed:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)modifyBulletinCompletionWithBulletin:(id)arg0 ;
-(void)observer:(id)arg0 addBulletin:(id)arg1 forFeed:(NSUInteger)arg2 ;
-(void)observer:(id)arg0 modifyBulletin:(id)arg1 ;
-(void)observer:(id)arg0 noteInvalidatedBulletinIDs:(id)arg1 ;
-(void)observer:(id)arg0 purgeReferencesToBulletinID:(id)arg1 ;
-(void)observer:(id)arg0 removeBulletin:(id)arg1 ;
-(void)observer:(id)arg0 removeBulletin:(id)arg1 forFeed:(NSUInteger)arg2 ;


@end


#endif