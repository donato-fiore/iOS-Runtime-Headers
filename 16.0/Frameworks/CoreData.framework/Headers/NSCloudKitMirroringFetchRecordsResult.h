// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCLOUDKITMIRRORINGFETCHRECORDSRESULT_H
#define NSCLOUDKITMIRRORINGFETCHRECORDSRESULT_H

@class NSDictionary, NSArray;


#import "NSCloudKitMirroringResult.h"

@interface NSCloudKitMirroringFetchRecordsResult : NSCloudKitMirroringResult

@property (readonly, nonatomic) NSDictionary *failedObjectIDsToError; // ivar: _failedObjectIDsToError
@property (readonly, nonatomic) NSArray *updatedObjectIDs; // ivar: _updatedObjectIDs


-(id)initWithRequest:(id)arg0 success:(BOOL)arg1 madeChanges:(BOOL)arg2 updatedObjectIDs:(id)arg3 failedObjectIDToError:(id)arg4 error:(id)arg5 ;
-(void)dealloc;


@end


#endif