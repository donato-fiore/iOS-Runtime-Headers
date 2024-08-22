// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSAGEVERIFICATIONTASK_H
#define AMSAGEVERIFICATIONTASK_H

@class ACAccount, NSString, NSDictionary;
@protocol AMSBagConsumer, AMSBagProtocol, AMSRequestPresentationDelegate;


#import "AMSTask.h"
#import "AMSQRCodeDialogTask.h"

@interface AMSAgeVerificationTask : AMSTask <AMSBagConsumer>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *options; // ivar: _options
@property (retain, nonatomic) NSString *pincode; // ivar: _pincode
@property (readonly, nonatomic) NSObject<AMSRequestPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) AMSQRCodeDialogTask *task; // ivar: _task


+(BOOL)_isAgeVerificationNeededForExpiration:(id)arg0 at:(id)arg1 ;
+(BOOL)_isTimestamp:(id)arg0 validAsOf:(id)arg1 ;
+(id)_errorCheckWithAccount:(id)arg0 bag:(id)arg1 ;
+(id)_isVerificationNeededForExpiration:(id)arg0 ageVerificationEnabled:(BOOL)arg1 at:(id)arg2 futureMoment:(id)arg3 ;
+(id)_momentOfExpiryFrom:(id)arg0 ;
+(id)_thirtyDaysInTheFutureFrom:(id)arg0 ;
+(id)createBagForSubProfile;
-(id)_performTaskForAccount:(id)arg0 withBag:(id)arg1 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 options:(id)arg2 presentationDelegate:(id)arg3 ;
-(id)isVerificationNeeded;
-(id)performTask;
-(void)_handleAccountStoreDidChangeNotification:(id)arg0 ;
-(void)_handleAccountStoreDidChangeNotification:(id)arg0 at:(id)arg1 ;
-(void)_startObservingAccountStoreChanges;
-(void)_stopObservingAccountStoreChanges;


@end


#endif