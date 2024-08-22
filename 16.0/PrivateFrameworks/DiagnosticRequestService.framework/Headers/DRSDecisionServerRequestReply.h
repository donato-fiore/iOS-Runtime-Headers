// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSDECISIONSERVERREQUESTREPLY_H
#define DRSDECISIONSERVERREQUESTREPLY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DRSDecisionServerRequestReply : NSObject

@property (readonly, nonatomic) NSString *rejectionReason; // ivar: _rejectionReason
@property (readonly, nonatomic) id *request; // ivar: _request
@property (readonly, nonatomic) BOOL requestAccepted; // ivar: _requestAccepted


-(id)initWithOriginalRequest:(id)arg0 reply:(id)arg1 ;
-(id)initWithOriginalRequest:(id)arg0 requestAccepted:(BOOL)arg1 rejectionReason:(id)arg2 ;


@end


#endif