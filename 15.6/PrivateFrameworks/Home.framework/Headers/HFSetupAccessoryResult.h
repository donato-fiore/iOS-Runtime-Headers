// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSETUPACCESSORYRESULT_H
#define HFSETUPACCESSORYRESULT_H

@class NSError, HMSetupAccessoryPayload;

#import <Foundation/Foundation.h>


@interface HFSetupAccessoryResult : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasAddRequest; // ivar: _hasAddRequest
@property (readonly, nonatomic) BOOL isValidForPairing; // ivar: _isValidForPairing
@property (readonly, nonatomic) HMSetupAccessoryPayload *setupPayload; // ivar: _setupPayload


-(BOOL)isAllZerosCode;
-(id)description;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithPayload:(id)arg0 error:(id)arg1 hasAddRequest:(BOOL)arg2 ;
-(id)initWithPayload:(id)arg0 hasAddRequest:(BOOL)arg1 ;
-(id)initWithSetupCode:(id)arg0 ;
-(id)initWithSetupURL:(id)arg0 ;


@end


#endif