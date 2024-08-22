// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIUPDATEDFACEPRINTSRESULT_H
#define HMIUPDATEDFACEPRINTSRESULT_H

@class HMFObject, NSSet;



@interface HMIUpdatedFaceprintsResult : HMFObject

@property (readonly) NSSet *allAtCurrentVersion;
@property (readonly) NSSet *createdAtCurrentVersion; // ivar: _createdAtCurrentVersion
@property (readonly) NSSet *existingAtCurrentVersion; // ivar: _existingAtCurrentVersion
@property (readonly) NSSet *existingAtOtherVersions; // ivar: _existingAtOtherVersions


-(id)initWithExistingAtCurrentVersion:(id)arg0 createdAtCurrentVersion:(id)arg1 existingAtOtherVersions:(id)arg2 ;


@end


#endif