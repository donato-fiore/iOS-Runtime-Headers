// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOAPREPORTLOGMSGREQUEST_H
#define GEOAPREPORTLOGMSGREQUEST_H

@class NSString, NSData;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"

@interface GEOAPReportLogMsgRequest : GEOXPCRequest <GEOXPCRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *logMsgData; // ivar: _logMsgData
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger uploadBatchId; // ivar: _uploadBatchId


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif