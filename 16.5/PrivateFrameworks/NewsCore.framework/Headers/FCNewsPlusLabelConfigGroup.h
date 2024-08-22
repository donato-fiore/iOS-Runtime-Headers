// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNEWSPLUSLABELCONFIGGROUP_H
#define FCNEWSPLUSLABELCONFIGGROUP_H


#import <Foundation/Foundation.h>

#import "FCNewsPlusLabelConfig.h"

@interface FCNewsPlusLabelConfigGroup : NSObject

@property (readonly, nonatomic) FCNewsPlusLabelConfig *configForPaidBundleViaOffer; // ivar: _configForPaidBundleViaOffer
@property (readonly, nonatomic) FCNewsPlusLabelConfig *configForSubscribers; // ivar: _configForSubscribers
@property (readonly, nonatomic) FCNewsPlusLabelConfig *configForTrialists; // ivar: _configForTrialists


-(id)initWithConfigDictionary:(id)arg0 ;


@end


#endif