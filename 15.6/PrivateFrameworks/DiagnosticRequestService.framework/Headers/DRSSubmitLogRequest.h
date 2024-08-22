// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSSUBMITLOGREQUEST_H
#define DRSSUBMITLOGREQUEST_H

@class NSString;


#import "DRSRequest.h"

@interface DRSSubmitLogRequest : DRSRequest

@property (readonly, nonatomic) NSString *sandboxExtension; // ivar: _sandboxExtension
@property (readonly, nonatomic) BOOL transferOwnership; // ivar: _transferOwnership


+(Class)_moClass;
+(id)entityName;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(BOOL)performOnReceiptWork:(id)arg0 dampeningOutcome:(NSUInteger)arg1 ;
-(NSUInteger)expectedType;
-(id)_initWithSubmitLogRequestMO_ON_MOC_QUEUE:(id)arg0 ;
-(id)debugDescription;
-(id)initWithXPCDict:(id)arg0 ;
-(id)replyForMessage:(id)arg0 ;
-(id)requestType;
-(void)_configureRequestMO:(id)arg0 ;


@end


#endif