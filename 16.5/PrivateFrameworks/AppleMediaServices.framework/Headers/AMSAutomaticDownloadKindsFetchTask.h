// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSAUTOMATICDOWNLOADKINDSFETCHTASK_H
#define AMSAUTOMATICDOWNLOADKINDSFETCHTASK_H

@class ACAccount, NSString;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"

@interface AMSAutomaticDownloadKindsFetchTask : AMSTask <AMSBagConsumer>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createBagForSubProfile;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 ;
-(id)perform;


@end


#endif