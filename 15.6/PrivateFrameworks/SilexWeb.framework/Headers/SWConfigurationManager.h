// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWCONFIGURATIONMANAGER_H
#define SWCONFIGURATIONMANAGER_H

@class NSString;
@protocol SWConfigurationManager, SWScript, SWLogger, SWConfigurationSerializer, SWScriptsManager;

#import <Foundation/Foundation.h>

#import "SWConfiguration.h"

@interface SWConfigurationManager : NSObject <SWConfigurationManager>



@property (copy, nonatomic) SWConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<SWScript> *configurationScript; // ivar: _configurationScript
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<SWConfigurationSerializer> *serializer; // ivar: _serializer
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SWScriptsManager> *webContentScriptsManager; // ivar: _webContentScriptsManager


-(id)initWithWebContentScriptsManager:(id)arg0 logger:(id)arg1 serializer:(id)arg2 ;


@end


#endif