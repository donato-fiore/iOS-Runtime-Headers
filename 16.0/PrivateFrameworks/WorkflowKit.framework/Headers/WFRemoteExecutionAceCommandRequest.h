// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREMOTEEXECUTIONACECOMMANDREQUEST_H
#define WFREMOTEEXECUTIONACECOMMANDREQUEST_H

@class NSDictionary, NSString;
@protocol WFPBCodable;


#import "WFRemoteExecutionRequest.h"

@interface WFRemoteExecutionAceCommandRequest : WFRemoteExecutionRequest <WFPBCodable>



@property (readonly, nonatomic) NSDictionary *aceCommandDictionary; // ivar: _aceCommandDictionary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)version;
-(BOOL)readMessageFromData:(id)arg0 error:(*id)arg1 ;
-(id)initWithAceCommandDictionary:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)writeMessageToWriter:(id)arg0 error:(*id)arg1 ;


@end


#endif