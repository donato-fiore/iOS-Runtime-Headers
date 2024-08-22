// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXDNDMODECONFIGURATIONCLIENTLISTENER_H
#define ATXDNDMODECONFIGURATIONCLIENTLISTENER_H

@class NSString;
@protocol DNDModeConfigurationServiceListener, ATXDNDModeConfigurationClientListenerDelegate;

#import <Foundation/Foundation.h>


@interface ATXDNDModeConfigurationClientListener : NSObject <DNDModeConfigurationServiceListener>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXDNDModeConfigurationClientListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)modeConfigurationService:(id)arg0 didReceiveAvailableModesUpdate:(id)arg1 ;


@end


#endif