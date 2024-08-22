// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYSTATEPROVIDER_H
#define SYSTATEPROVIDER_H


#import <Foundation/Foundation.h>


@interface SYStateProvider : NSObject {
    unsigned int _type;
    NSUInteger _handle;
    id *_state;
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) id *encoder; // ivar: _encoder


+(id)stateProviderWithName:(id)arg0 type:(unsigned int)arg1 typeName:(id)arg2 ;
-(id)_encodedState;
-(id)init;
-(id)initWithName:(id)arg0 type:(unsigned int)arg1 typeName:(id)arg2 ;
-(void)dealloc;
-(void)updateState:(id)arg0 ;


@end


#endif