// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSDEVICEOFFERELIGIBILITYTASK_H
#define AMSDEVICEOFFERELIGIBILITYTASK_H

@class NSString;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>

#import "AMSURLSession.h"

@interface AMSDeviceOfferEligibilityTask : NSObject

@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) NSString *deviceGUID; // ivar: _deviceGUID
@property (readonly, nonatomic) NSString *masterSerialNumber; // ivar: _masterSerialNumber
@property (retain, nonatomic) AMSURLSession *urlSession; // ivar: _urlSession


-(id)_accountEligibilityEncoderWithBag:(id)arg0 account:(id)arg1 clientInfo:(id)arg2 ;
-(id)_accountEligibilityRequestParametersWithIdentifiers:(id)arg0 ;
-(id)_deviceEligibilityEncoderWithBag:(id)arg0 clientInfo:(id)arg1 ;
-(id)_deviceEligibilityRequestParametersWithGroups:(id)arg0 ;
-(id)_eligibilityRequest;
-(id)_offersDecodedFromResult:(id)arg0 ;
-(id)initWithBag:(id)arg0 deviceGUID:(id)arg1 masterSerialNumber:(id)arg2 urlSession:(id)arg3 ;
-(id)performAccountEligibility:(id)arg0 forOffers:(id)arg1 clientInfo:(id)arg2 ;
-(id)performAnonymousDeviceEligibility:(id)arg0 clientInfo:(id)arg1 ;


@end


#endif