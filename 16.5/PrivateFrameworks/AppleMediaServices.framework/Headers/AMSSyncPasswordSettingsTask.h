// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSYNCPASSWORDSETTINGSTASK_H
#define AMSSYNCPASSWORDSETTINGSTASK_H

@class ACAccount, NSString;
@protocol AMSURLProtocolDelegate, AMSBagConsumer, AMSBagProtocol, NSURLSessionDelegate><AMSURLProtocolDelegate;


#import "AMSTask.h"
#import "AMSProcessInfo.h"

@interface AMSSyncPasswordSettingsTask : AMSTask <AMSURLProtocolDelegate, AMSBagConsumer>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<NSURLSessionDelegate><AMSURLProtocolDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger freeSetting; // ivar: _freeSetting
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger paidSetting; // ivar: _paidSetting
@property (readonly) Class superclass;


+(NSUInteger)freePasswordSettingFromServerValue:(NSUInteger)arg0 ;
+(NSUInteger)paidPasswordSettingFromServerValue:(NSUInteger)arg0 ;
+(id)createBagForSubProfile;
+(id)serverValueForFreePasswordSetting:(NSUInteger)arg0 ;
+(id)serverValueForPaidPasswordSetting:(NSUInteger)arg0 ;
-(id)initWithAccount:(id)arg0 freeSetting:(NSUInteger)arg1 paidSetting:(NSUInteger)arg2 delegate:(id)arg3 bag:(id)arg4 ;
-(id)performSync;


@end


#endif