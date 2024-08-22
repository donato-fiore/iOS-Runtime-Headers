// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFDAMESSAGESTOREDELETEREQUEST_H
#define _MFDAMESSAGESTOREDELETEREQUEST_H

@class DAMailboxDeleteMessageRequest;
@protocol MFDAMailAccountRequest;



@interface _MFDAMessageStoreDeleteRequest : DAMailboxDeleteMessageRequest <MFDAMailAccountRequest>



@property (readonly, nonatomic) BOOL isUserRequested;
@property (readonly, nonatomic) BOOL shouldSend;


-(NSUInteger)generationNumber;


@end


#endif