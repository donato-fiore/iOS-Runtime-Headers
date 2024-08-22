// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRANSPARENCYRPCREQUESTBUILDER_H
#define TRANSPARENCYRPCREQUESTBUILDER_H


#import <Foundation/Foundation.h>


@interface TransparencyRPCRequestBuilder : NSObject



+(id)buildConsistencyProofRequest:(id)arg0 revisions:(id)arg1 error:(*id)arg2 ;
+(id)buildPublicKeysRequest:(id)arg0 error:(*id)arg1 ;
+(id)buildQueryRequest:(id)arg0 accountID:(id)arg1 loggableDatas:(id)arg2 application:(id)arg3 error:(*id)arg4 ;
+(id)buildRevisionLogInclusionProofRequest:(id)arg0 logType:(int)arg1 revisions:(id)arg2 error:(*id)arg3 ;


@end


#endif