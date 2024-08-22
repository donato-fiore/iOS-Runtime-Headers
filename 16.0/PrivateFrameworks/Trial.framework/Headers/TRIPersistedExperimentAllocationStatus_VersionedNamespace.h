// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPERSISTEDEXPERIMENTALLOCATIONSTATUS_VERSIONEDNAMESPACE_H
#define TRIPERSISTEDEXPERIMENTALLOCATIONSTATUS_VERSIONEDNAMESPACE_H

@class TRIPBMessage, NSString;



@interface TRIPersistedExperimentAllocationStatus_VersionedNamespace : TRIPBMessage

@property (nonatomic) unsigned int compatibilityVersion;
@property (nonatomic) BOOL hasCompatibilityVersion;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *name;


+(id)descriptor;


@end


#endif