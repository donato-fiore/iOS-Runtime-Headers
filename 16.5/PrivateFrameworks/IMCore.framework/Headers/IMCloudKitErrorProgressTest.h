// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCLOUDKITERRORPROGRESSTEST_H
#define IMCLOUDKITERRORPROGRESSTEST_H

@class NSError;


#import "IMCloudKitSyncProgressRuntimeTest.h"

@interface IMCloudKitErrorProgressTest : IMCloudKitSyncProgressRuntimeTest

@property (copy, nonatomic) NSError *error; // ivar: _error


-(id)initWithErrorCode:(NSInteger)arg0 ;
-(void)willUpdateSyncState:(id)arg0 ;


@end


#endif