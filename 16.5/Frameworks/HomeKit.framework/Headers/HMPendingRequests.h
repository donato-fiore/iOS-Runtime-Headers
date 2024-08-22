// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMPENDINGREQUESTS_H
#define HMPENDINGREQUESTS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface HMPendingRequests : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSMutableArray *contextLists; // ivar: _contextLists


-(id)_retrieveRequestOfType:(NSInteger)arg0 forIdentifier:(id)arg1 remove:(BOOL)arg2 ;
-(id)init;
-(id)removeAccessoryDescriptionForIdentifier:(id)arg0 ;
-(id)removeAccessoryForIdentifier:(id)arg0 ;
-(id)removeActionForIdentifier:(id)arg0 ;
-(id)removeApplicationDataForIdentifier:(id)arg0 ;
-(id)removeCompletionBlockForIdentifier:(id)arg0 ;
-(id)removeEventForIdentifier:(id)arg0 ;
-(id)removeEventsForIdentifier:(id)arg0 ;
-(id)removeMediaSystemBuilderForIdentifier:(id)arg0 ;
-(id)removeProgressBlockForIdentifier:(id)arg0 ;
-(id)removeRequestOfType:(NSInteger)arg0 forIdentifier:(id)arg1 ;
-(id)removeTriggerForIdentifier:(id)arg0 ;
-(id)retrieveAccessoryDescriptionForIdentifier:(id)arg0 ;
-(id)retrieveCompletionBlockForIdentifier:(id)arg0 ;
-(id)retrieveProgressBlockForIdentifier:(id)arg0 ;
-(id)retrieveRequestOfType:(NSInteger)arg0 forIdentifier:(id)arg1 ;
-(id)uuidForAccessoryDescriptionUUID:(id)arg0 ;
-(void)_addRequest:(id)arg0 ofType:(NSInteger)arg1 forIdentifier:(id)arg2 ;
-(void)addAccessory:(id)arg0 andCompletionBlock:(id)arg1 forIdentifier:(id)arg2 ;
-(void)addAccessoryDescription:(id)arg0 progressBlock:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(void)addAction:(id)arg0 andCompletionBlock:(id)arg1 forIdentifier:(id)arg2 ;
-(void)addApplicationData:(id)arg0 andCompletionBlock:(id)arg1 forIdentifier:(id)arg2 ;
-(void)addCompletionBlock:(id)arg0 forIdentifier:(id)arg1 ;
-(void)addEvent:(id)arg0 andCompletionBlock:(id)arg1 forIdentifier:(id)arg2 ;
-(void)addEvents:(id)arg0 andCompletionBlock:(id)arg1 forIdentifier:(id)arg2 ;
-(void)addMediaSystemBuilder:(id)arg0 andCompletionBlock:(id)arg1 forIdentifier:(id)arg2 ;
-(void)addProgressHandler:(id)arg0 forAccessoryIdentifier:(id)arg1 ;
-(void)addRequest:(id)arg0 ofType:(NSInteger)arg1 forIdentifier:(id)arg2 ;
-(void)addTrigger:(id)arg0 andCompletionBlock:(id)arg1 forIdentifier:(id)arg2 ;


@end


#endif