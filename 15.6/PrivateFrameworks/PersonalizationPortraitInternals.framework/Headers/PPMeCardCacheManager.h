// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPMECARDCACHEMANAGER_H
#define PPMECARDCACHEMANAGER_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface PPMeCardCacheManager : NSObject {
    _PASLock *_lock;
}




-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)accessCacheWithBlock:(id)arg0 ;


@end


#endif