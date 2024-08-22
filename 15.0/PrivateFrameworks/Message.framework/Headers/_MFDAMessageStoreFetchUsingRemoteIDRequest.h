// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFDAMESSAGESTOREFETCHUSINGREMOTEIDREQUEST_H
#define _MFDAMESSAGESTOREFETCHUSINGREMOTEIDREQUEST_H

@class DAMailboxFetchMessageRequest;
@protocol MFDAMailAccountRequest;



@interface _MFDAMessageStoreFetchUsingRemoteIDRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest>



@property (readonly, nonatomic) BOOL isUserRequested;
@property (readonly, nonatomic) BOOL shouldSend;


-(NSUInteger)generationNumber;


@end


#endif