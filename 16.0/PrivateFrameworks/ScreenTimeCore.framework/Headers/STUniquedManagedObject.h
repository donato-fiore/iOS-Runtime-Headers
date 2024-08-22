// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUNIQUEDMANAGEDOBJECT_H
#define STUNIQUEDMANAGEDOBJECT_H

@class NSManagedObject, NSUUID, NSString;



@interface STUniquedManagedObject : NSManagedObject

@property (readonly, nonatomic) NSUUID *sortKey;
@property (readonly, nonatomic) NSString *uniqueIdentifier;


-(id)computeUniqueIdentifier;
-(id)dictionaryRepresentation;
-(void)awakeFromInsert;
-(void)updateUniqueIdentifier;


@end


#endif