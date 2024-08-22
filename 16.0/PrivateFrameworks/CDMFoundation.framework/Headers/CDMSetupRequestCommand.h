// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMSETUPREQUESTCOMMAND_H
#define CDMSETUPREQUESTCOMMAND_H

@class NLXSchemaNLXClientEventMetadata;


#import "CDMBaseCommand.h"
#import "CDMDynamicConfig.h"

@interface CDMSetupRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) CDMDynamicConfig *dynamicConfig; // ivar: _dynamicConfig
@property (readonly, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata; // ivar: _selfMetadata


+(id)setupWithLanguageCode:(id)arg0 ;
-(id)commandName;
-(id)initWithDynamicConfig:(id)arg0 ;
-(id)initWithDynamicConfig:(id)arg0 selfMetadata:(id)arg1 ;


@end


#endif