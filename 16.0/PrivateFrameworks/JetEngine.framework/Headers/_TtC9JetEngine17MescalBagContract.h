// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9JETENGINE17MESCALBAGCONTRACT_H
#define _TTC9JETENGINE17MESCALBAGCONTRACT_H

@protocol AMSMescalBagContract;

#import <Foundation/Foundation.h>


@interface _TtC9JetEngine17MescalBagContract : NSObject <AMSMescalBagContract>

 {
    ? backing;
}


@property (nonatomic, readonly) id *mescalCertificateURL;
@property (nonatomic, readonly) id *mescalPrimingURL;
@property (nonatomic, readonly) id *mescalSetupURL;
@property (nonatomic, readonly) id *mescalSignSapRequests;
@property (nonatomic, readonly) id *mescalSignSapResponses;
@property (nonatomic, readonly) id *mescalSignedActions;


-(id)init;


@end


#endif