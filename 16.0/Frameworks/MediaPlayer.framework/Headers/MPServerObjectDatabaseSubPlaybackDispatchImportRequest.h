// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSERVEROBJECTDATABASESUBPLAYBACKDISPATCHIMPORTREQUEST_H
#define MPSERVEROBJECTDATABASESUBPLAYBACKDISPATCHIMPORTREQUEST_H



#import "MPServerObjectDatabaseAssetImportRequest.h"
#import "MPIdentifierSet.h"

@interface MPServerObjectDatabaseSubPlaybackDispatchImportRequest : MPServerObjectDatabaseAssetImportRequest {
    MPIdentifierSet *_identifiers;
}




-(BOOL)performWithDatabaseOperations:(id)arg0 error:(*id)arg1 ;
-(id)initWithIdentifiers:(id)arg0 playbackResponse:(id)arg1 ;


@end


#endif