// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLROW_H
#define NSSQLROW_H

@protocol NSCopying;


#import "NSPersistentCacheRow.h"
#import "_CDSnapshot.h"

@interface NSSQLRow : NSPersistentCacheRow <NSCopying>

 {
    _CDSnapshot *_snapshot;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(unsigned int)newBatchRowAllocation:(*id)arg0 count:(unsigned int)arg1 forSQLEntity:(id)arg2 withOwnedObjectIDs:(*id)arg3 andTimestamp:(CGFloat)arg4 ;
+(void)initialize;
-(*id)knownKeyValuesPointer;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)version;
-(id)_snapshot_;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSQLEntity:(id)arg0 objectID:(id)arg1 ;
-(id)initWithSQLEntity:(id)arg0 ownedObjectID:(id)arg1 andTimestamp:(CGFloat)arg2 ;
-(id)newObjectIDForToOne:(id)arg0 ;
-(id)objectID;
-(id)valueForKey:(id)arg0 ;
-(unsigned int)_versionNumber;
-(void)dealloc;
-(void)setForeignEntityKeySlot:(unsigned int)arg0 entityKey:(unsigned int)arg1 ;
-(void)setForeignKeySlot:(unsigned int)arg0 int64:(NSInteger)arg1 ;
-(void)setForeignOrderKeySlot:(unsigned int)arg0 orderKey:(unsigned int)arg1 ;
-(void)setObjectID:(id)arg0 ;
-(void)setOptLock:(NSInteger)arg0 ;


@end


#endif