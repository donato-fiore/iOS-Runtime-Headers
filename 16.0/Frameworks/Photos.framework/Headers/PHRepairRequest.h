// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHREPAIRREQUEST_H
#define PHREPAIRREQUEST_H

@class PLProgressFollower, NSSet;
@protocol PHMediaRequestDelegate;


#import "PHMediaRequest.h"
#import "PHAssetResource.h"

@interface PHRepairRequest : PHMediaRequest {
    id<PHMediaRequestDelegate> *_delegate;
    PLProgressFollower *_progressFollower;
}


@property (readonly, nonatomic) NSSet *errorCodes; // ivar: _errorCodes
@property (readonly, nonatomic) PHAssetResource *resource; // ivar: _resource


-(BOOL)isSynchronous;
-(id)_sendRepairRequestWithReply:(id)arg0 ;
-(void)dealloc;
-(void)startRequest;


@end


#endif