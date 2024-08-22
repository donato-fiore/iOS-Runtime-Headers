// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXDNDMODECONFIGURATIONCLIENTLISTENER_H
#define ATXDNDMODECONFIGURATIONCLIENTLISTENER_H

@class NSString;
@protocol DNDModeConfigurationServiceListener;

#import <Foundation/Foundation.h>

#import "ATXDNDModeConfigurationClient.h"

@interface ATXDNDModeConfigurationClientListener : NSObject <DNDModeConfigurationServiceListener>

 {
    ATXDNDModeConfigurationClient *_configClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfigClient:(id)arg0 ;
-(void)modeConfigurationService:(id)arg0 didReceiveAvailableModesUpdate:(id)arg1 ;


@end


#endif