// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STRESTRICTINGAPPLICATIONSGROUPSPECIFIERPROVIDER_H
#define STRESTRICTINGAPPLICATIONSGROUPSPECIFIERPROVIDER_H

@class NSArray;


#import "STRootGroupSpecifierProvider.h"

@interface STRestrictingApplicationsGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (copy) NSArray *authorizationRecords; // ivar: _authorizationRecords


-(NSInteger)getAuthorizationStatusForRecordIdentifier:(id)arg0 fromRecords:(id)arg1 ;
-(id)init;
-(id)isFamilyControlsEnabled:(id)arg0 ;
-(void)_updateSpecifiersWithAuthorizationRecords;
-(void)setFamilyControlsEnabled:(id)arg0 forSpecifier:(id)arg1 ;


@end


#endif