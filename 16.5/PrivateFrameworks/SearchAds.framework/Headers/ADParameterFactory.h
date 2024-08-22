// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADPARAMETERFACTORY_H
#define ADPARAMETERFACTORY_H


#import <Foundation/Foundation.h>

#import "ADCapService.h"

@interface ADParameterFactory : NSObject

@property (retain, nonatomic) ADCapService *capService; // ivar: _capService


-(id)campaignNamespaceParameterWithCampaignNamespace:(id)arg0 ;
-(id)frequencyCapDataParameter;
-(id)init;
-(id)privacyDataKeyParameter;
-(id)requestedAdDataParameter;
-(id)requestedTemplateTypeParameter;
-(id)toroClickCountDataParameter;


@end


#endif