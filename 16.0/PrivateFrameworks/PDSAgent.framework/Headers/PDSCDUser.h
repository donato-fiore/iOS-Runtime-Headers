// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDSCDUSER_H
#define PDSCDUSER_H

@class NSManagedObject, NSSet, NSString;



@interface PDSCDUser : NSManagedObject

@property (retain, nonatomic) NSSet *registrations;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) short userType;


+(id)fetchRequest;
+(id)insertIntoManagedObjectContext:(id)arg0 ;
+(id)predicateForUserID:(id)arg0 userType:(short)arg1 ;
+(id)userFromUser:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;
-(id)user;


@end


#endif