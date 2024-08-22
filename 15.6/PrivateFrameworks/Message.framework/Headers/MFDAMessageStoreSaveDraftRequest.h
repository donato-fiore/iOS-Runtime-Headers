// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFDAMESSAGESTORESAVEDRAFTREQUEST_H
#define MFDAMESSAGESTORESAVEDRAFTREQUEST_H

@class DADraftMessageRequest, NSString;
@protocol MFDAMailAccountRequest;



@interface MFDAMessageStoreSaveDraftRequest : DADraftMessageRequest <MFDAMailAccountRequest>

 {
    NSString *_messageIDHeader;
    NSString *_folderID;
}


@property (readonly, nonatomic) BOOL isUserRequested;
@property (readonly, nonatomic) BOOL shouldSend;


-(NSUInteger)generationNumber;
-(id)initWithMessage:(id)arg0 mailbox:(id)arg1 ;


@end


#endif