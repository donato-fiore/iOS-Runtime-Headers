// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKASMCONCRETEUSERFETCHER_H
#define CRKASMCONCRETEUSERFETCHER_H

@protocol CRKASMUserFetching, CRKClassKitRosterRequirements;

#import <Foundation/Foundation.h>


@interface CRKASMConcreteUserFetcher : NSObject <CRKASMUserFetching>



@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *rosterRequirements; // ivar: _rosterRequirements


-(id)initWithRosterRequirements:(id)arg0 ;
-(void)fetchASMUsersWithIdentifiers:(id)arg0 completion:(id)arg1 ;


@end


#endif