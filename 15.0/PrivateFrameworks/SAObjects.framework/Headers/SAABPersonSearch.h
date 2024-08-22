// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAABPERSONSEARCH_H
#define SAABPERSONSEARCH_H

@class NSURL, NSDate, NSString, NSNumber;


#import "SADomainCommand.h"
#import "SALocation.h"
#import "SAEmail.h"
#import "SAPhone.h"

@interface SAABPersonSearch : SADomainCommand

@property (copy, nonatomic) NSURL *accountIdentifier;
@property (retain, nonatomic) SALocation *address;
@property (copy, nonatomic) NSDate *birthday;
@property (copy, nonatomic) NSString *company;
@property (retain, nonatomic) SAEmail *email;
@property (copy, nonatomic) NSNumber *me;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAPhone *phone;
@property (copy, nonatomic) NSString *relationship;
@property (copy, nonatomic) NSString *scope;


+(id)personSearch;
+(id)personSearchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)groupIdentifier;


@end


#endif