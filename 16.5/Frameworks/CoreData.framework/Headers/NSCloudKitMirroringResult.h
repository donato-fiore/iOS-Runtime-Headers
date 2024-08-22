// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCLOUDKITMIRRORINGRESULT_H
#define NSCLOUDKITMIRRORINGRESULT_H

@class NSError, NSString;


#import "NSPersistentStoreResult.h"
#import "NSCloudKitMirroringRequest.h"

@interface NSCloudKitMirroringResult : NSPersistentStoreResult

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL madeChanges; // ivar: _madeChanges
@property (readonly, nonatomic) NSCloudKitMirroringRequest *request; // ivar: _request
@property (readonly, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (readonly, nonatomic) BOOL success; // ivar: _success


-(id)description;
-(id)initWithRequest:(id)arg0 storeIdentifier:(id)arg1 success:(BOOL)arg2 madeChanges:(BOOL)arg3 error:(id)arg4 ;
-(void)dealloc;


@end


#endif