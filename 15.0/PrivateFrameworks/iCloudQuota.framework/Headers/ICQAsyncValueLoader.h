// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQASYNCVALUELOADER_H
#define ICQASYNCVALUELOADER_H


#import <Foundation/Foundation.h>


@interface ICQAsyncValueLoader : NSObject {
    os_unfair_lock_s _valueLock;
}


@property (copy, nonatomic) id *didUpdate; // ivar: _didUpdate
@property (copy, nonatomic) id *fetchValue; // ivar: _fetchValue
@property (retain, nonatomic) id *value; // ivar: _value


-(id)initWithDefaultValue:(id)arg0 valueFetcher:(id)arg1 ;


@end


#endif