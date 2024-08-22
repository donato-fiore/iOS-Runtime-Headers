// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPLONGLIVEDCKOPCACHE_H
#define MSPLONGLIVEDCKOPCACHE_H

@class NSMutableSet, NSUserDefaults;

#import <Foundation/Foundation.h>


@interface MSPLongLivedCKOpCache : NSObject

@property (retain, nonatomic) NSMutableSet *currentOpIDs; // ivar: _currentOpIDs
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults


+(id)sharedCache;
-(BOOL)hasOperationID:(id)arg0 forType:(id)arg1 ;
-(BOOL)isAwareOfOperationID:(id)arg0 ;
-(BOOL)isCurrentOperationID:(id)arg0 ;
-(id)_operationIDsByType;
-(id)_operationIDsForType:(id)arg0 ;
-(id)init;
-(void)_setOperationIDs:(id)arg0 forType:(id)arg1 ;
-(void)addOperation:(id)arg0 forType:(id)arg1 ;
-(void)pruneOperationsToIDs:(id)arg0 ;
-(void)removeOperation:(id)arg0 forType:(id)arg1 ;


@end


#endif