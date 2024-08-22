// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNATOMICTOGGLE_H
#define CNATOMICTOGGLE_H


#import <Foundation/Foundation.h>


@interface CNAtomicToggle : NSObject {
    uint8_t _state;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)trySetState:(BOOL)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithState:(BOOL)arg0 ;


@end


#endif