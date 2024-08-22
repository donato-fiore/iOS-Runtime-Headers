// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLJSONOBSERVERINFO_H
#define TMLJSONOBSERVERINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TMLJSONObserverInfo : NSObject {
    NSUInteger _hash;
}


@property (readonly, nonatomic) id *callback; // ivar: _callback
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, weak, nonatomic) id *target; // ivar: _target
@property (readonly, nonatomic) id *targetUnsafe; // ivar: _targetUnsafe


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithObserver:(id)arg0 keyPath:(id)arg1 callback:(id)arg2 ;
-(void)notify:(id)arg0 ;


@end


#endif