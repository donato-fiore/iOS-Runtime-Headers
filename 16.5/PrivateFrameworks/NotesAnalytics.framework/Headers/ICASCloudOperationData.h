// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASCLOUDOPERATIONDATA_H
#define ICASCLOUDOPERATIONDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASOperationType.h"

@interface ICASCloudOperationData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *operationGroupName; // ivar: _operationGroupName
@property (readonly, nonatomic) NSString *operationID; // ivar: _operationID
@property (readonly, nonatomic) ICASOperationType *operationType; // ivar: _operationType


+(id)dataName;
-(id)initWithOperationID:(id)arg0 operationType:(id)arg1 operationGroupName:(id)arg2 ;
-(id)toDict;


@end


#endif