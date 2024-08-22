// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSERVEROBJECTDATABASESTOREPLATFORMIMPORTREQUEST_H
#define MPSERVEROBJECTDATABASESTOREPLATFORMIMPORTREQUEST_H



#import "MPServerObjectDatabaseMetadataImportRequest.h"

@interface MPServerObjectDatabaseStorePlatformImportRequest : MPServerObjectDatabaseMetadataImportRequest



+(id)_childKeyForParentType:(id)arg0 type:(id)arg1 ;
+(id)_relationshipKeyForObject:(id)arg0 ;
+(id)_unsupportedParentChildRelationships;
+(id)_unsupportedStorePlatformKinds;
-(id)initWithPayload:(id)arg0 ;
-(id)performWithDatabaseOperations:(id)arg0 augmentingPayload:(*id)arg1 trustID:(id)arg2 playActivityFeatureName:(id)arg3 ;


@end


#endif