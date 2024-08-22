// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMXPCMESSAGECREATEORLOOKUPAPPGROUPBYAPPGROUPIDENTIFIER_H
#define MCMXPCMESSAGECREATEORLOOKUPAPPGROUPBYAPPGROUPIDENTIFIER_H

@class NSString;
@protocol MCMParametersCreateOrLookupAppGroupByAppGroupIdentifier;


#import "MCMXPCMessageBase.h"

@interface MCMXPCMessageCreateOrLookupAppGroupByAppGroupIdentifier : MCMXPCMessageBase <MCMParametersCreateOrLookupAppGroupByAppGroupIdentifier>



@property (readonly, nonatomic) NSString *appGroupIdentifier; // ivar: _appGroupIdentifier


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;


@end


#endif