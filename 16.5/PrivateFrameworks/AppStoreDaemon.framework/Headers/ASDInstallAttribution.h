// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDINSTALLATTRIBUTION_H
#define ASDINSTALLATTRIBUTION_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDInstallAttribution : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)interface;
+(id)sharedInstance;
-(id)_initWithServiceBroker:(id)arg0 ;
-(id)init;
-(void)addInstallAttributionParamsWithConfig:(id)arg0 ;
-(void)addInstallAttributionParamsWithConfig:(id)arg0 completionHandler:(id)arg1 ;
-(void)addInstallWebAttributionParamsWithConfig:(id)arg0 completionHandler:(id)arg1 ;
-(void)endImpressionWithConfig:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerInstallAttributionPingbackForApp:(id)arg0 completionHandler:(id)arg1 ;
-(void)startImpressionWithConfig:(id)arg0 completionHandler:(id)arg1 ;
-(void)startPingbackTaskWithCompletionHandler:(id)arg0 ;
-(void)updateConversionValueForInstallAttributionPingbackForApp:(id)arg0 conversionValue:(id)arg1 completionHandler:(id)arg2 ;
-(void)updatePostbackConversionValuesForApp:(id)arg0 fineConversionValue:(id)arg1 coarseConversionValue:(id)arg2 completionHandler:(id)arg3 ;
-(void)updatePostbackConversionValuesForApp:(id)arg0 fineConversionValue:(id)arg1 coarseConversionValue:(id)arg2 lockWindow:(BOOL)arg3 completionHandler:(id)arg4 ;


@end


#endif