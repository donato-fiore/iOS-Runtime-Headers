// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSSUBMITRAPIDLOGREQUEST_H
#define DRSSUBMITRAPIDLOGREQUEST_H

@class NSNumber, NSString, NSData;


#import "DRSSubmitLogRequest.h"

@interface DRSSubmitRapidLogRequest : DRSSubmitLogRequest

@property (retain, nonatomic) NSNumber *cfDidSucceed; // ivar: _cfDidSucceed
@property (retain, nonatomic) NSString *cfFailureReason; // ivar: _cfFailureReason
@property (retain, nonatomic) NSData *cfReplyPayload; // ivar: _cfReplyPayload


+(Class)_moClass;
+(id)entityName;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)expectedType;
-(NSUInteger)logSizeLimitBytes;
-(id)_initWithSubmitRapidLogRequestMO_ON_MOC_QUEUE:(id)arg0 ;
-(id)debugDescription;
-(id)initWithXPCDict:(id)arg0 ;
-(id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)arg0 ;
-(id)requestType;
-(id)targetContainerName;
-(void)_configureRequestMO:(id)arg0 ;


@end


#endif