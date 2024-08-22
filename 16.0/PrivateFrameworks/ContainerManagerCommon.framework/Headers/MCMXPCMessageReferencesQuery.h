// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMXPCMESSAGEREFERENCESQUERY_H
#define MCMXPCMESSAGEREFERENCESQUERY_H

@protocol MCMParametersReferencesQuery;


#import "MCMXPCMessageWithOwnersAndGroupsBase.h"
#import "MCMUserIdentity.h"

@interface MCMXPCMessageReferencesQuery : MCMXPCMessageWithOwnersAndGroupsBase <MCMParametersReferencesQuery>



@property (readonly, nonatomic) BOOL createDuringReconciliation; // ivar: _createDuringReconciliation
@property (readonly, nonatomic) BOOL deleteDuringReconciliation; // ivar: _deleteDuringReconciliation
@property (readonly, nonatomic) NSUInteger explicitFlags; // ivar: _explicitFlags
@property (readonly, nonatomic) NSUInteger privateFlags; // ivar: _privateFlags
@property (readonly, nonatomic) unsigned int uid; // ivar: _uid
@property (readonly, nonatomic) MCMUserIdentity *userIdentity; // ivar: _userIdentity
@property (readonly, nonatomic) BOOL yesReallyApplyToAll; // ivar: _yesReallyApplyToAll


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;


@end


#endif