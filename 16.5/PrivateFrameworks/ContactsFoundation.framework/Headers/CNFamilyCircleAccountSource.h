// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNFAMILYCIRCLEACCOUNTSOURCE_H
#define CNFAMILYCIRCLEACCOUNTSOURCE_H

@class NSString, FAFamilyCircle;
@protocol CNDelegateAccountSource;

#import <Foundation/Foundation.h>


@interface CNFamilyCircleAccountSource : NSObject <CNDelegateAccountSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FAFamilyCircle *familyCircle; // ivar: _familyCircle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)delegateAccounts;
-(id)initWithFamilyCircle:(id)arg0 ;
-(id)myFamilyMemberRecord;
-(id)primaryAccount;


@end


#endif