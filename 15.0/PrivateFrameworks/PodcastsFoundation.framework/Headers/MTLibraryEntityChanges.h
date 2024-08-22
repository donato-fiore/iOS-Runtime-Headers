// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLIBRARYENTITYCHANGES_H
#define MTLIBRARYENTITYCHANGES_H

@class NSMutableSet, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLibraryEntityChanges : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableSet *deletedObjectIDs; // ivar: _deletedObjectIDs
@property (readonly, nonatomic) NSString *entityName; // ivar: _entityName
@property (retain, nonatomic) NSMutableSet *insertedObjectIDs; // ivar: _insertedObjectIDs
@property (retain, nonatomic) NSMutableSet *updatedObjectIDs; // ivar: _updatedObjectIDs


-(BOOL)hasChanges;
-(BOOL)hasDeletes;
-(BOOL)hasInserts;
-(BOOL)hasUpdates;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithEntityName:(id)arg0 ;
-(id)insertedAndUpdatedObjectIDs;
-(void)add:(id)arg0 changeType:(int)arg1 ;
-(void)combineChanges:(id)arg0 ;


@end


#endif