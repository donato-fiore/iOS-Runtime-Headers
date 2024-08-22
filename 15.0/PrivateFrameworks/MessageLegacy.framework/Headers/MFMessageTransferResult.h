// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMESSAGETRANSFERRESULT_H
#define MFMESSAGETRANSFERRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MFMessageTransferResult : NSObject

@property (readonly, nonatomic) NSArray *failedMessages; // ivar: _failedMessages
@property (readonly, nonatomic) NSUInteger resultCode; // ivar: _resultCode
@property (readonly, nonatomic) NSArray *transferedMessages; // ivar: _transferedMessages


-(id)debugDescription;
-(id)initWithResultCode:(NSUInteger)arg0 failedMessages:(id)arg1 transferedMessage:(id)arg2 ;
-(void)dealloc;


@end


#endif