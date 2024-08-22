// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDDISCOVERALLUSERIDENTITIESOPERATION_H
#define CKDDISCOVERALLUSERIDENTITIESOPERATION_H

@class NSMutableDictionary;


#import "CKDDiscoverUserIdentitiesOperation.h"

@interface CKDDiscoverAllUserIdentitiesOperation : CKDDiscoverUserIdentitiesOperation

@property (retain, nonatomic) NSMutableDictionary *contactIdentifiersByLookupInfo; // ivar: _contactIdentifiersByLookupInfo


-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(void)_discoverIdentitiesBatched:(id)arg0 ;
-(void)_handleDiscoveredIdentity:(id)arg0 lookupInfo:(id)arg1 responseCode:(id)arg2 ;
-(void)_populateFakeUnitTestLookupInfos;
-(void)_populateFakeUnitTestLookupInfosForEnvironment:(NSInteger)arg0 ;
-(void)_populateRealUserIdentityLookupInfos;
-(void)_populateUserIdentityLookupInfos;
-(void)main;


@end


#endif