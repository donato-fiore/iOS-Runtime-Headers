// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREDEEMOPERATION_H
#define SKUIREDEEMOPERATION_H

@class NSOperation, NSString;


#import "SKUIClientContext.h"

@interface SKUIRedeemOperation : NSOperation {
    NSString *_code;
}


@property (nonatomic) BOOL cameraRecognized; // ivar: _cameraRecognized
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (copy) id *resultBlock; // ivar: _resultBlock


-(id)_authenticationContext;
-(id)_itemsForItemIdentifiers:(id)arg0 ;
-(id)_performRequestWithProperties:(id)arg0 error:(*id)arg1 ;
-(id)_redeemForSuccessDictionary:(id)arg0 ;
-(id)_requestPropertiesForThankYouWithURL:(id)arg0 ;
-(id)initWithCode:(id)arg0 ;
-(void)_applyThankYouDictionary:(id)arg0 toRedeem:(id)arg1 ;
-(void)main;


@end


#endif