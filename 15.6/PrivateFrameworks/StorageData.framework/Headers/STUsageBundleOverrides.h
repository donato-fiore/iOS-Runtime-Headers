// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STUSAGEBUNDLEOVERRIDES_H
#define STUSAGEBUNDLEOVERRIDES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface STUsageBundleOverrides : NSObject

@property (readonly) BOOL ignore; // ivar: _ignore
@property (readonly) NSString *replaceWithZeroSizeApp; // ivar: _replaceWithZeroSizeApp


+(id)overrides;
+(id)overridesFor:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif