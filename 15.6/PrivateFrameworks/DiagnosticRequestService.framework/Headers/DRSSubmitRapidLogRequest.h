// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSSUBMITRAPIDLOGREQUEST_H
#define DRSSUBMITRAPIDLOGREQUEST_H



#import "DRSSubmitLogRequest.h"

@interface DRSSubmitRapidLogRequest : DRSSubmitLogRequest



+(Class)_moClass;
+(id)entityName;
-(NSUInteger)expectedType;
-(NSUInteger)logSizeLimitBytes;
-(id)_initWithSubmitRapidLogRequestMO_ON_MOC_QUEUE:(id)arg0 ;
-(id)initWithXPCDict:(id)arg0 ;
-(id)requestType;
-(id)targetContainerName;


@end


#endif