// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLIBRARYCHANGES_H
#define MTLIBRARYCHANGES_H

@class NSMutableDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLibraryChanges : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableDictionary *changesByEntityName; // ivar: _changesByEntityName
@property (readonly, nonatomic) NSString *contextName; // ivar: _contextName


-(BOOL)hasChanges;
-(BOOL)hasChangesForEntityNames:(id)arg0 ;
-(BOOL)hasDeletes;
-(BOOL)hasDeletesForEntityNames:(id)arg0 ;
-(BOOL)hasInserts;
-(BOOL)hasInsertsForEntityNames:(id)arg0 ;
-(BOOL)hasUpdates;
-(BOOL)hasUpdatesForEntityNames:(id)arg0 ;
-(id)changesForEntityName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entityNames;
-(id)init;
-(id)initWithContextName:(id)arg0 ;
-(void)addChangeWith:(id)arg0 entityName:(id)arg1 changeType:(int)arg2 ;
-(void)combineChanges:(id)arg0 ;
-(void)removeAllChanges;


@end


#endif