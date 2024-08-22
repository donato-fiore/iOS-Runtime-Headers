// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKPARTICIPANTFORSORTING_H
#define EKPARTICIPANTFORSORTING_H

@class NSString;
@protocol NSCopying, EKIdentityProtocol;

#import <Foundation/Foundation.h>

#import "EKParticipant.h"

@interface EKParticipantForSorting : NSObject <NSCopying>



@property (copy, nonatomic) NSString *cachedDisplayName; // ivar: _cachedDisplayName
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (weak, nonatomic) NSObject<EKIdentityProtocol> *identity; // ivar: _identity
@property (nonatomic) BOOL isEmail; // ivar: _isEmail
@property (nonatomic) BOOL isPhone; // ivar: _isPhone
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (weak, nonatomic) EKParticipant *participant; // ivar: _participant


+(id)_sharedParticipantForSortingWithIdentity:(id)arg0 participant:(id)arg1 contactPredicate:(id)arg2 ;
+(id)participantForSortingWithEKParticipant:(id)arg0 ;
+(id)participantForSortingWithIdentity:(id)arg0 ;
-(BOOL)participantIsOptional:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compareByContactNames:(id)arg0 ;
-(NSInteger)compareByEmailThenByContactName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayName;


@end


#endif