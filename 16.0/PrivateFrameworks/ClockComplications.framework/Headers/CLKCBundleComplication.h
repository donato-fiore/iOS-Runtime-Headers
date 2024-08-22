// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCBUNDLECOMPLICATION_H
#define CLKCBUNDLECOMPLICATION_H

@class NSString, CLKComplicationDescriptor;


#import "CLKCComplication.h"

@interface CLKCBundleComplication : CLKCComplication

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) CLKComplicationDescriptor *complicationDescriptor; // ivar: _complicationDescriptor


+(id)complicationWithBundleIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 ;
+(id)complicationWithBundleIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 complicationDescriptor:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 complicationDescriptor:(id)arg2 ;


@end


#endif