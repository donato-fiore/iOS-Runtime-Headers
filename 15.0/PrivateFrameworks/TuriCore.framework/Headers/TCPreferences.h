// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCPREFERENCES_H
#define TCPREFERENCES_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TCPreferences : NSObject

@property (readonly) NSInteger devicePolicy;
@property (retain, nonatomic) NSMutableDictionary *properties; // ivar: _properties


+(id)defaultPreferences;
+(id)userPreferences;
+(void)setOverridePreferences:(id)arg0 ;
-(id)initWithDefaults;
-(id)initWithProperties:(id)arg0 ;


@end


#endif