// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSTATELESSPERSONALIZATIONCONFIGURATION_H
#define FCSTATELESSPERSONALIZATIONCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FCStatelessPersonalizationEnablementRequirements.h"

@interface FCStatelessPersonalizationConfiguration : NSObject

@property (retain, nonatomic) FCStatelessPersonalizationEnablementRequirements *enablementRequirements; // ivar: _enablementRequirements


-(id)initWithDictionary:(id)arg0 ;


@end


#endif