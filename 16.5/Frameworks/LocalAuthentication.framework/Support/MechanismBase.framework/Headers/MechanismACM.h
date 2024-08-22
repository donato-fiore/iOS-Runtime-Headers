// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MECHANISMACM_H
#define MECHANISMACM_H

@class NSArray, NSNumber;


#import "MechanismBase.h"
#import "ACMContextRecord.h"

@interface MechanismACM : MechanismBase

@property (readonly, nonatomic) *__ACMHandle acmContext; // ivar: _acmContext
@property (readonly, nonatomic) ACMContextRecord *acmContextRecord; // ivar: _acmContextRecord
@property (readonly, nonatomic) NSUInteger acmFlags; // ivar: _acmFlags
@property (retain, nonatomic) NSArray *identityUUIDs; // ivar: _identityUUIDs
@property (retain, nonatomic) NSNumber *updateConstraintOffset; // ivar: _updateConstraintOffset


-(id)initWithEventIdentifier:(NSInteger)arg0 remoteViewController:(NSInteger)arg1 acmContextRecord:(id)arg2 request:(id)arg3 ;
-(id)mergeResult:(id)arg0 withUpdateOfIdentityUUID:(id)arg1 ;


@end


#endif