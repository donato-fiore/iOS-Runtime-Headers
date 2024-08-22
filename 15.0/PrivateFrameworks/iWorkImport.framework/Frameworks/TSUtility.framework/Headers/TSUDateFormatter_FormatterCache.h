// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUDATEFORMATTER_FORMATTERCACHE_H
#define TSUDATEFORMATTER_FORMATTERCACHE_H

@class NSLock, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSUDateFormatter_FormatterCache : NSObject {
    NSLock *_dateFormatterCacheLock;
    NSMutableDictionary *_dateFormatterCache;
}




+(id)dateFormatterStringFromDate:(id)arg0 withFormat:(id)arg1 locale:(id)arg2 ;
-(id)dateFormatterStringFromDate:(id)arg0 withFormat:(id)arg1 locale:(id)arg2 ;
-(id)init;


@end


#endif