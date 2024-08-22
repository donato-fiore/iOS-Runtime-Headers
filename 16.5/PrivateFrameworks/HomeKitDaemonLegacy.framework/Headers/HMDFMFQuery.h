// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDFMFQUERY_H
#define HMDFMFQUERY_H

@class HMFObject, NSString;
@protocol OS_dispatch_queue;



@interface HMDFMFQuery : HMFObject

@property (readonly, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy, nonatomic) NSString *queryID; // ivar: _queryID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // ivar: _responseQueue


-(id)description;
-(id)initWithResponseQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif