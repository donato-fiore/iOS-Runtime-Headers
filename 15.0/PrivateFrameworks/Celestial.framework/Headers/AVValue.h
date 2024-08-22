// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVVALUE_H
#define AVVALUE_H


#import <Foundation/Foundation.h>


@interface AVValue : NSObject {
    SEL _selector;
}




+(id)valueWithSelector:(SEL)arg0 ;
-(SEL)selectorValue;
-(id)initWithSelector:(SEL)arg0 ;


@end


#endif