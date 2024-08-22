// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FRAMEWORKCACHE_H
#define FRAMEWORKCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FrameworkCache : NSObject {
    NSMutableDictionary *_selectorValueDict;
}




+(SEL)getCacheableSelectorForNotification:(id)arg0 ;
+(unsigned char)getCachePolicyForSelector:(SEL)arg0 ;
-(id)init;
-(id)valueForSelector:(SEL)arg0 ;
-(void)handleDisconnection;
-(void)handleNotification:(id)arg0 ;
-(void)handleValue:(id)arg0 forSelector:(SEL)arg1 ;


@end


#endif