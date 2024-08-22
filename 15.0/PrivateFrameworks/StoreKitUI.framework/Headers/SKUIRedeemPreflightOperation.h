// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREDEEMPREFLIGHTOPERATION_H
#define SKUIREDEEMPREFLIGHTOPERATION_H

@class NSOperation, NSString;
@protocol OS_dispatch_queue;


#import "SKUIClientContext.h"
#import "SKUIRedeemConfiguration.h"
#import "SKUIRedeemViewControllerLegacy.h"

@interface SKUIRedeemPreflightOperation : NSOperation {
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _loadsRedeemCodeMetadata;
    id *_outputBlock;
    NSString *_redeemCode;
    SKUIRedeemConfiguration *_redeemConfiguration;
}


@property (nonatomic) BOOL forcesAuthentication; // ivar: _forcesAuthentication
@property BOOL loadsRedeemCodeMetadata;
@property (copy) id *outputBlock;
@property (retain) SKUIRedeemConfiguration *redeemConfiguration;
@property (weak, nonatomic) SKUIRedeemViewControllerLegacy *redeemViewController; // ivar: _redeemViewController


-(id)_authenticationContext;
-(id)_initSKUIRedeemPreflightOperation;
-(id)_redeemCodeMetadataWithClientContext:(id)arg0 ;
-(id)init;
-(id)initWithClientContext:(id)arg0 redeemCode:(id)arg1 forcesAuthentication:(BOOL)arg2 ;
-(void)main;


@end


#endif