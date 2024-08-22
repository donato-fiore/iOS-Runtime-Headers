// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WBSSITEMETADATATOKEN_H
#define _WBSSITEMETADATATOKEN_H

@class NSTimer;

#import <Foundation/Foundation.h>

#import "WBSSiteMetadataRequest.h"

@interface _WBSSiteMetadataToken : NSObject {
    BOOL _cancelled;
    os_unfair_lock_s _cancelledLock;
}


@property (getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) NSTimer *delayTimer; // ivar: _delayTimer
@property (nonatomic) BOOL didReceiveResponse; // ivar: _didReceiveResponse
@property (readonly, nonatomic) BOOL isOneTimeRequest; // ivar: _isOneTimeRequest
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) WBSSiteMetadataRequest *request; // ivar: _request
@property (readonly, copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)description;
-(id)initWithOneTimeRequest:(id)arg0 priority:(NSInteger)arg1 responseHandler:(id)arg2 ;
-(id)initWithRequest:(id)arg0 priority:(NSInteger)arg1 responseHandler:(id)arg2 ;
-(void)dealloc;
-(void)dispatchResponse:(id)arg0 ;


@end


#endif