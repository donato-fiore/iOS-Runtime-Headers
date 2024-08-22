// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREMOTEEXECUTIONALERTREQUESTRESPONSE_H
#define WFREMOTEEXECUTIONALERTREQUESTRESPONSE_H

@class NSError, NSString;


#import "WFRemoteExecutionRequest.h"

@interface WFRemoteExecutionAlertRequestResponse : WFRemoteExecutionRequest

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, nonatomic) NSString *selectedButton; // ivar: _selectedButton


+(NSInteger)version;
-(BOOL)readMessageFromData:(id)arg0 error:(*id)arg1 ;
-(id)initWithSelectedButton:(id)arg0 requestIdentifier:(id)arg1 error:(id)arg2 ;
-(id)writeMessageToWriter:(id)arg0 error:(*id)arg1 ;


@end


#endif