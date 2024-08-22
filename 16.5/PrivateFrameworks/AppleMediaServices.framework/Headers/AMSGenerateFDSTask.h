// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSGENERATEFDSTASK_H
#define AMSGENERATEFDSTASK_H

@class ACAccount, NSString, NSNumber;
@protocol AMSBagProtocol;


#import "AMSTask.h"
#import "AMSFDSRequest.h"

@interface AMSGenerateFDSTask : AMSTask

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSUInteger action;
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) BOOL deviceSupportsAFDSValues;
@property (readonly, nonatomic) BOOL deviceSupportsAFDSValuesV2;
@property (readonly, nonatomic) NSString *logKey;
@property (readonly, nonatomic) NSNumber *purchaseIdentifier;
@property (readonly, nonatomic) AMSFDSRequest *request; // ivar: _request


+(BOOL)deviceSupportsAFDSV2WithBag:(id)arg0 logKey:(id)arg1 ;
-(id)initWithPurchaseInfo:(id)arg0 bag:(id)arg1 ;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 ;
-(id)runTask;


@end


#endif