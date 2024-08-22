// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLUICONTROLSTATE_H
#define TMLUICONTROLSTATE_H


#import <Foundation/Foundation.h>


@interface TMLUIControlState : NSObject

@property (nonatomic) NSUInteger state; // ivar: _state


+(BOOL)isControlStateClass:(id)arg0 ;
+(void)registerControlState:(id)arg0 forClass:(Class)arg1 ;
+(void)verifyStateProperty:(id)arg0 withClass:(Class)arg1 ;


@end


#endif