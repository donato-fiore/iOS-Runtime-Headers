// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUTESTSTATE_H
#define TUTESTSTATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TUTestState : NSObject {
    NSMutableDictionary *_objects;
}


@property (readonly, nonatomic) int signalCount; // ivar: _signalCount


-(id)description;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(int)waitWithTimeout:(CGFloat)arg0 ;
-(void)incrementIntegerForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)signal;


@end


#endif