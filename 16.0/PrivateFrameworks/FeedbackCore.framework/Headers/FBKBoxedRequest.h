// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKBOXEDREQUEST_H
#define FBKBOXEDREQUEST_H

@class NSURLRequest;

#import <Foundation/Foundation.h>


@interface FBKBoxedRequest : NSObject

@property (copy, nonatomic) id *errorBlock; // ivar: _errorBlock
@property (retain, nonatomic) NSURLRequest *request; // ivar: _request
@property (copy, nonatomic) id *successBlock; // ivar: _successBlock


// -(id)initWithRequest:(id)arg0 successBlock:(id)arg1 errorBlock:(unk)arg2  ;


@end


#endif