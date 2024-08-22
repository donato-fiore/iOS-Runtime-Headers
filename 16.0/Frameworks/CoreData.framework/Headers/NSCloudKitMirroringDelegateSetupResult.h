// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCLOUDKITMIRRORINGDELEGATESETUPRESULT_H
#define NSCLOUDKITMIRRORINGDELEGATESETUPRESULT_H

@class CKContainer, CKDatabase;


#import "NSCloudKitMirroringResult.h"

@interface NSCloudKitMirroringDelegateSetupResult : NSCloudKitMirroringResult {
    CKContainer *_container;
    CKDatabase *_database;
}




-(id)initWithRequest:(id)arg0 success:(BOOL)arg1 error:(id)arg2 container:(id)arg3 database:(id)arg4 ;
-(void)dealloc;


@end


#endif