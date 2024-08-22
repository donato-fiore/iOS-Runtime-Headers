// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCLOUDKITMIRRORINGFETCHRECORDSRESULT_H
#define NSCLOUDKITMIRRORINGFETCHRECORDSRESULT_H

@class NSDictionary, NSArray;


#import "NSCloudKitMirroringResult.h"

@interface NSCloudKitMirroringFetchRecordsResult : NSCloudKitMirroringResult

@property (readonly, nonatomic) NSDictionary *failedObjectIDsToError; // ivar: _failedObjectIDsToError
@property (readonly, nonatomic) NSArray *updatedObjectIDs; // ivar: _updatedObjectIDs


-(id)initWithRequest:(id)arg0 storeIdentifier:(id)arg1 success:(BOOL)arg2 madeChanges:(BOOL)arg3 updatedObjectIDs:(id)arg4 failedObjectIDToError:(id)arg5 error:(id)arg6 ;
-(void)dealloc;


@end


#endif