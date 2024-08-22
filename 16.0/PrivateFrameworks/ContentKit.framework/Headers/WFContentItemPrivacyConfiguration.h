// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTENTITEMPRIVACYCONFIGURATION_H
#define WFCONTENTITEMPRIVACYCONFIGURATION_H

@class NSOrderedSet;

#import <Foundation/Foundation.h>

#import "WFContentLocation.h"

@interface WFContentItemPrivacyConfiguration : NSObject

@property (nonatomic) NSUInteger disclosureLevel; // ivar: _disclosureLevel
@property (readonly, nonatomic) NSOrderedSet *disclosureWarnings; // ivar: _disclosureWarnings
@property (readonly, nonatomic) WFContentLocation *origin; // ivar: _origin


+(id)configurationWithOrigin:(id)arg0 disclosureLevel:(NSUInteger)arg1 ;
+(id)configurationWithOrigin:(id)arg0 disclosureLevel:(NSUInteger)arg1 disclosureWarnings:(id)arg2 ;
-(id)initWithOrigin:(id)arg0 disclosureLevel:(NSUInteger)arg1 disclosureWarnings:(id)arg2 ;


@end


#endif