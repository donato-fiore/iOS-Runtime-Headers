// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSYOPTIONS_H
#define PSYOPTIONS_H

@class NSURL, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PSYOptions : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSURL *activityInfoDirectory; // ivar: _activityInfoDirectory
@property (nonatomic) BOOL dryRun; // ivar: _dryRun
@property (copy, nonatomic) NSArray *jobs; // ivar: _jobs
@property (nonatomic, getter=shouldResetDeviceSyncState) BOOL resetDeviceSyncState; // ivar: _resetDeviceSyncState
@property (nonatomic, getter=shouldResumePendingJobs) BOOL resumePendingJobs; // ivar: _resumePendingJobs
@property (nonatomic) NSUInteger syncSessionType; // ivar: _syncSessionType
@property (nonatomic) NSUInteger terminationJobCount; // ivar: _terminationJobCount
@property (copy, nonatomic) NSArray *testInputs; // ivar: _testInputs


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif