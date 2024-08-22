// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFDAMESSAGESTOREGETUPDATESREQUEST_H
#define _MFDAMESSAGESTOREGETUPDATESREQUEST_H

@class DAMailboxGetUpdatesRequest;
@protocol MFDAMailAccountRequest;



@interface _MFDAMessageStoreGetUpdatesRequest : DAMailboxGetUpdatesRequest <MFDAMailAccountRequest>

 {
    BOOL _isUserRequested;
}


@property (readonly, nonatomic) BOOL isUserRequested;
@property (readonly, nonatomic) BOOL shouldSend;


-(BOOL)mf_alwaysReportFailures;
-(NSUInteger)generationNumber;
-(id)deferredOperation;
-(id)initRequestForBodyFormat:(int)arg0 withBodySizeLimit:(int)arg1 isUserRequested:(BOOL)arg2 ;


@end


#endif