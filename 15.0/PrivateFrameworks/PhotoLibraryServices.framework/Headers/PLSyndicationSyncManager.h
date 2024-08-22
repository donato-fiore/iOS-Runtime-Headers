// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSYNDICATIONSYNCMANAGER_H
#define PLSYNDICATIONSYNCMANAGER_H

@class NSSet;
@protocol PLSyndicationSyncManagerDelegate;

#import <Foundation/Foundation.h>


@interface PLSyndicationSyncManager : NSObject {
    NSSet *_suppportedQueryTypes;
    unsigned short _savedAssetTypeMask;
}


@property (readonly, weak, nonatomic) NSObject<PLSyndicationSyncManagerDelegate> *delegate; // ivar: _delegate


+(void)_recursiveFindStartDateForMessagesSpotlightItemsWithStartDate:(id)arg0 endDate:(id)arg1 completionHandler:(id)arg2 ;
+(void)findStartDateForMessagesSpotlightItemsWithCompletionHandler:(id)arg0 ;
-(BOOL)_canHandleSearchableItem:(id)arg0 forQueryType:(NSInteger)arg1 ;
-(BOOL)_deleteConversationWithSyndicationIdentifiers:(id)arg0 library:(id)arg1 ;
-(BOOL)_deleteGuestAssetWithSyndicationIdentifiers:(id)arg0 library:(id)arg1 ;
-(BOOL)_isQueryTypeSupported:(NSInteger)arg0 ;
-(id)initWithQueryTypes:(id)arg0 savedAssetTypeMask:(unsigned short)arg1 delegate:(id)arg2 ;
-(void)_createOrUpdateObjectFromSearchableItem:(id)arg0 library:(id)arg1 ;
-(void)_processSearchableItem:(id)arg0 forQueryType:(NSInteger)arg1 library:(id)arg2 ;
-(void)_processZombieItem:(id)arg0 library:(id)arg1 ;
-(void)_processZombieItems:(id)arg0 library:(id)arg1 ;
-(void)_updateSyncTokenWithDate:(id)arg0 queryType:(NSInteger)arg1 library:(id)arg2 syncTokenIsCurrent:(BOOL)arg3 ;
-(void)syncSyndicationItemsWithStartDate:(id)arg0 endDate:(id)arg1 queryType:(NSInteger)arg2 library:(id)arg3 completion:(id)arg4 ;


@end


#endif