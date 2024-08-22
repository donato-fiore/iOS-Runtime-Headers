// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTSUBSCRIPTIONSTATUSREQUEST_H
#define SUSCRIPTSUBSCRIPTIONSTATUSREQUEST_H

@class NSString;


#import "SUScriptObject.h"

@interface SUScriptSubscriptionStatusRequest : SUScriptObject {
    NSInteger _carrierBundleProvisioningStyle;
    BOOL _ignoreCache;
    NSInteger _reason;
    NSInteger _service;
    BOOL _wantsPartialResults;
}


@property (copy) NSString *carrierBundleProvisioningStyleName;
@property id *ignoreCache;
@property (copy) NSString *reasonName;
@property (readonly) NSString *reasonNameDeepLink;
@property (copy) NSString *serviceName;
@property (readonly) NSString *serviceNameAppleMusic;
@property id *wantsPartialResults;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)init;
-(id)scriptAttributeKeys;
-(void)_handleRequestCompletionWithSubscriptionStatus:(id)arg0 isFinal:(BOOL)arg1 scriptCallbackFunction:(id)arg2 ;
-(void)performRequestWithCallbackFunction:(id)arg0 ;


@end


#endif