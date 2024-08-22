// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREDEEMCONFIGURATION_H
#define SKUIREDEEMCONFIGURATION_H

@class UIImage, NSOperationQueue;

#import <Foundation/Foundation.h>

#import "SKUIITunesPassConfiguration.h"
#import "SKUIClientContext.h"

@interface SKUIRedeemConfiguration : NSObject

@property (readonly, nonatomic) SKUIITunesPassConfiguration *ITunesPassConfiguration; // ivar: _itunesPassConfiguration
@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, nonatomic) UIImage *inputImage; // ivar: _inputImage
@property (readonly, nonatomic) UIImage *landingImage; // ivar: _landingImage
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) UIImage *successImage; // ivar: _successImage


-(id)_redeemPreflightRequestBodyData;
-(id)initWithOperationQueue:(id)arg0 category:(NSInteger)arg1 clientContext:(id)arg2 ;
-(void)_didLoadWithResponseDictionary:(id)arg0 ;
-(void)_loadConfigurationWithURLBagDictionary:(id)arg0 completionBlock:(id)arg1 ;
-(void)_loadDefaultImages;
-(void)loadConfigurationWithCompletionBlock:(id)arg0 ;


@end


#endif