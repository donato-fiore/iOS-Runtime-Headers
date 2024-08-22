// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPUSTACKITEMREUSECACHE_H
#define _MPUSTACKITEMREUSECACHE_H


#import <Foundation/Foundation.h>


@interface _MPUStackItemReuseCache : NSObject



+(id)dequeueReusableStackItemWithIdentifier:(id)arg0 ;
+(void)enqueueReusableStackItem:(id)arg0 forReuseIdentifier:(id)arg1 ;
+(void)registerStackViewForReuseIdentifier:(id)arg0 ;
+(void)unregisterStackViewForReuseIdentifier:(id)arg0 ;


@end


#endif