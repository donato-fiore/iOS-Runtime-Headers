// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTIMINGCOLLECTION_H
#define IMTIMINGCOLLECTION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMTimingCollection : NSObject {
    NSMutableDictionary *_timings;
    os_unfair_lock_s _lock;
}




-(BOOL)hasKey:(id)arg0 ;
-(CGFloat)totalTimeForKey:(id)arg0 ;
-(id)description;
-(id)init;
-(void)removeTimingForKey:(id)arg0 ;
-(void)startTimingForKey:(id)arg0 ;
-(void)stopTimingForKey:(id)arg0 ;


@end


#endif