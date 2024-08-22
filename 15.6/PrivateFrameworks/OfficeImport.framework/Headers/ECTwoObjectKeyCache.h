// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECTWOOBJECTKEYCACHE_H
#define ECTWOOBJECTKEYCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ECTwoObjectKeyCache : NSObject {
    NSMutableDictionary *mCache;
}




-(id)init;
-(id)objectForKey1:(id)arg0 key2:(id)arg1 ;
-(void)setObject:(id)arg0 forKey1:(id)arg1 key2:(id)arg2 ;


@end


#endif