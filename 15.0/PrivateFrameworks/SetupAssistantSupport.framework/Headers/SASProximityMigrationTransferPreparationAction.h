// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASPROXIMITYMIGRATIONTRANSFERPREPARATIONACTION_H
#define SASPROXIMITYMIGRATIONTRANSFERPREPARATIONACTION_H

@class NSString;


#import "SASProximityAction.h"

@interface SASProximityMigrationTransferPreparationAction : SASProximityAction

@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName


+(NSUInteger)actionID;
+(id)actionFromDictionary:(id)arg0 ;
-(BOOL)hasResponse;
-(id)requestPayload;


@end


#endif