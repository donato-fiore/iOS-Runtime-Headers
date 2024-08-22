// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAFETCHFOLLOWUPREQUEST_H
#define FAFETCHFOLLOWUPREQUEST_H

@class NSString;


#import "FAFamilyCircleRequest.h"

@interface FAFetchFollowupRequest : FAFamilyCircleRequest {
    NSString *_altDSID;
}




-(id)initWithAltDSID:(id)arg0 ;
-(void)startRequestWithCompletionHandler:(id)arg0 ;


@end


#endif