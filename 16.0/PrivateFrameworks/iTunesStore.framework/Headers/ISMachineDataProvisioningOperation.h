// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISMACHINEDATAPROVISIONINGOPERATION_H
#define ISMACHINEDATAPROVISIONINGOPERATION_H

@class NSData, NSString;


#import "ISOperation.h"

@interface ISMachineDataProvisioningOperation : ISOperation {
    NSUInteger _accountID;
    BOOL _allowsBootstrapCellularData;
    BOOL _hidesServerDrivenDialogs;
    NSData *_inputData;
    NSInteger _protocolVersion;
    NSString *_userAgent;
}


@property BOOL allowsBootstrapCellularData;
@property BOOL hidesServerDrivenDialogs;
@property NSInteger protocolVersion;
@property (copy) NSString *userAgent;


-(BOOL)_finishProvisioningWithResponse:(id)arg0 sessionID:(unsigned int)arg1 error:(*id)arg2 ;
-(id)_newFinishProvisioningOperationWithData:(id)arg0 ;
-(id)initWithAccountIdentifier:(NSUInteger)arg0 provisioningData:(id)arg1 ;
-(void)run;


@end


#endif