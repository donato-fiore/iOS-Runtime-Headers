// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSMACHINEDATAREQUEST_H
#define SSMACHINEDATAREQUEST_H

@class NSNumber, NSData, NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSMachineDataRequest : SSRequest <SSXPCCoding>

 {
    NSNumber *_accountID;
    NSData *_actionData;
    NSString *_actionName;
    BOOL _allowsBootstrapCellularData;
    NSInteger _protocolVersion;
    NSString *_userAgent;
    BOOL _waitsForPurchaseOperations;
}


@property (copy) NSNumber *accountIdentifier;
@property (copy) NSData *actionData;
@property (copy) NSString *actionName;
@property BOOL allowsBootstrapCellularData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger protocolVersion;
@property (readonly) Class superclass;
@property (copy) NSString *userAgent;
@property BOOL waitsForPurchaseOperations;


-(id)copyXPCEncoding;
-(id)initWithURLResponse:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithDetailedCompletionBlock:(id)arg0 ;


@end


#endif