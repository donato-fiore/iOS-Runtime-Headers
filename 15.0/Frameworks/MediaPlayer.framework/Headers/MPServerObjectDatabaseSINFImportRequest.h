// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSERVEROBJECTDATABASESINFIMPORTREQUEST_H
#define MPSERVEROBJECTDATABASESINFIMPORTREQUEST_H

@class NSString;


#import "MPServerObjectDatabaseAssetImportRequest.h"

@interface MPServerObjectDatabaseSINFImportRequest : MPServerObjectDatabaseAssetImportRequest {
    id *_requestPayload;
    NSString *_hashedPersonID;
}




-(BOOL)performWithDatabaseOperations:(id)arg0 error:(*id)arg1 ;
-(id)initWithPayload:(id)arg0 requestPayload:(id)arg1 hashedPersonID:(id)arg2 ;


@end


#endif