// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWACCUMULATION_H
#define NWACCUMULATION_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NWAccumulation : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSString *currentState; // ivar: _currentState
@property (retain, nonatomic) NSMutableDictionary *durations; // ivar: _durations
@property (nonatomic) BOOL isSnapshot; // ivar: _isSnapshot
@property (nonatomic) CGFloat lastUpdateTime; // ivar: _lastUpdateTime
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)description;
-(id)initWithName:(id)arg0 ;
-(id)snapshot;
-(void)dealloc;
-(void)reset;
-(void)updateWithState:(id)arg0 atTime:(CGFloat)arg1 ;


@end


#endif