// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDINSTALLATTRIBUTION_H
#define ASDINSTALLATTRIBUTION_H


#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDInstallAttribution : NSObject {
    ASDServiceBroker *_serviceBroker;
}




+(id)interface;
+(id)sharedInstance;
-(id)_initWithServiceBroker:(id)arg0 ;
-(id)init;
-(void)addInstallAttributionParamsWithConfig:(id)arg0 ;
-(void)addInstallAttributionParamsWithConfig:(id)arg0 completionHandler:(id)arg1 ;
-(void)addTestInstallAttributionPingbackWithDictionary:(id)arg0 completionHandler:(id)arg1 ;
-(void)endImpressionWithConfig:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerTestInstallAttributionPingbackForApp:(id)arg0 completionHandler:(id)arg1 ;
-(void)startImpressionWithConfig:(id)arg0 completionHandler:(id)arg1 ;
-(void)startPingbackTaskWithCompletionHandler:(id)arg0 ;
-(void)updateConversionValueForTestInstallAttributionPingbackForApp:(id)arg0 conversionValue:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif