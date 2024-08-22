// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUANFRENDERINGCONFIGURATIONPROVIDER_H
#define NUANFRENDERINGCONFIGURATIONPROVIDER_H

@class SXRenderingConfiguration, NSString;
@protocol SXRenderingConfigurationProvider, FCNewsAppConfigurationManager;

#import <Foundation/Foundation.h>


@interface NUANFRenderingConfigurationProvider : NSObject <SXRenderingConfigurationProvider>



@property (readonly, nonatomic) NSObject<FCNewsAppConfigurationManager> *appConfigurationManager; // ivar: _appConfigurationManager
@property (readonly, nonatomic) SXRenderingConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAppConfigurationManager:(id)arg0 ;


@end


#endif