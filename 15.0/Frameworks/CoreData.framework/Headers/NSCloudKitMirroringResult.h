// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCLOUDKITMIRRORINGRESULT_H
#define NSCLOUDKITMIRRORINGRESULT_H

@class NSError;


#import "NSPersistentStoreResult.h"
#import "NSCloudKitMirroringRequest.h"

@interface NSCloudKitMirroringResult : NSPersistentStoreResult

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL madeChanges; // ivar: _madeChanges
@property (readonly, nonatomic) NSCloudKitMirroringRequest *request; // ivar: _request
@property (readonly, nonatomic) BOOL success; // ivar: _success


-(id)description;
-(id)initWithRequest:(id)arg0 success:(BOOL)arg1 madeChanges:(BOOL)arg2 error:(id)arg3 ;
-(void)dealloc;


@end


#endif