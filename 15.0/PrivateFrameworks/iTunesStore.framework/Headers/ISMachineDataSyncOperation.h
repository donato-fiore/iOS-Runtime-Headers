// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISMACHINEDATASYNCOPERATION_H
#define ISMACHINEDATASYNCOPERATION_H

@class NSData, NSString;


#import "ISOperation.h"

@interface ISMachineDataSyncOperation : ISOperation {
    NSUInteger _accountID;
    BOOL _allowsBootstrapCellularData;
    BOOL _hidesServerDrivenDialogs;
    NSData *_inputData;
    NSInteger _protocolVersion;
    NSString *_syncState;
    NSString *_userAgent;
}


@property BOOL allowsBootstrapCellularData;
@property BOOL hidesServerDrivenDialogs;
@property NSInteger protocolVersion;
@property (readonly) NSString *syncState;
@property (copy) NSString *userAgent;


-(id)_newSyncOperationWithClientData:(id)arg0 machineIDData:(id)arg1 ;
-(id)initWithAccountIdentifier:(NSUInteger)arg0 syncData:(id)arg1 ;
-(void)run;


@end


#endif