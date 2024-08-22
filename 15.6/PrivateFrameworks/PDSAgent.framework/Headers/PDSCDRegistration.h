// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSCDREGISTRATION_H
#define PDSCDREGISTRATION_H

@class NSManagedObject, NSString;


#import "PDSCDUser.h"

@interface PDSCDRegistration : NSManagedObject

@property (copy, nonatomic) NSString *clientID;
@property (nonatomic) short entryState;
@property (nonatomic) short environment;
@property (copy, nonatomic) NSString *qualifier;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) PDSCDUser *user;


+(id)activeRegistrations;
+(id)activeRegistrationsForClientID:(id)arg0 ;
+(id)fetchRequest;
+(id)insertIntoManagedObjectContext:(id)arg0 ;
+(id)pendingRegistrations;
+(id)registrationFromEntry:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;
+(id)registrationsForClientID:(id)arg0 ;
+(id)registrationsWithState:(unsigned char)arg0 ;
+(id)uniquenessPredicateForEntry:(id)arg0 ;
-(id)entryWithUserCache:(id)arg0 ;


@end


#endif