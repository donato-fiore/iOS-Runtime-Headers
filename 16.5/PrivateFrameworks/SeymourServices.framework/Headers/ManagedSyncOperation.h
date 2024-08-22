// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDSYNCOPERATION_H
#define MANAGEDSYNCOPERATION_H

@class NSManagedObject, NSString;



@interface ManagedSyncOperation : NSManagedObject

@property (nonatomic, copy) NSString *action;
@property (nonatomic) int domain;
@property (nonatomic, copy) NSString *syncIdentifier;
@property (nonatomic) CGFloat timestamp;
@property (nonatomic, copy) NSString *zoneName;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif