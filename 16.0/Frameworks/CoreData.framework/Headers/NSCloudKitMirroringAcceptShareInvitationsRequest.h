// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCLOUDKITMIRRORINGACCEPTSHAREINVITATIONSREQUEST_H
#define NSCLOUDKITMIRRORINGACCEPTSHAREINVITATIONSREQUEST_H

@class NSArray;


#import "NSCloudKitMirroringRequest.h"

@interface NSCloudKitMirroringAcceptShareInvitationsRequest : NSCloudKitMirroringRequest {
    NSArray *_shareURLsToAccept;
    NSArray *_shareMetadatasToAccept;
}




-(id)description;
-(id)initWithOptions:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;


@end


#endif