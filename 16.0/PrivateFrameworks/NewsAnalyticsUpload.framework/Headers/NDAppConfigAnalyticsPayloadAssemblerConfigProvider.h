// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NDAPPCONFIGANALYTICSPAYLOADASSEMBLERCONFIGPROVIDER_H
#define NDAPPCONFIGANALYTICSPAYLOADASSEMBLERCONFIGPROVIDER_H

@protocol NDAnalyticsPayloadAssemblerConfigProvider, FCNewsAppConfigurationManager;

#import <Foundation/Foundation.h>


@interface NDAppConfigAnalyticsPayloadAssemblerConfigProvider : NSObject <NDAnalyticsPayloadAssemblerConfigProvider>



@property (retain, nonatomic) NSObject<FCNewsAppConfigurationManager> *appConfigurationManager; // ivar: _appConfigurationManager


-(id)init;
-(id)initWithAppConfigurationManager:(id)arg0 ;
-(void)fetchConfigWithCompletion:(id)arg0 ;


@end


#endif