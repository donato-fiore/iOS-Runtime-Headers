// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXHEURISTICCACHEEXPIRER_H
#define ATXHEURISTICCACHEEXPIRER_H

@class NSMutableSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXHeuristicCacheExpirer : NSObject <NSSecureCoding>

 {
    NSMutableSet *_expirationEntries;
    _opaque_pthread_mutex_t _lock;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_start;
-(void)_stop;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)expire;
-(void)startExpiring:(id)arg0 cache:(id)arg1 ;
-(void)stopExpiring:(id)arg0 cache:(id)arg1 ;


@end


#endif