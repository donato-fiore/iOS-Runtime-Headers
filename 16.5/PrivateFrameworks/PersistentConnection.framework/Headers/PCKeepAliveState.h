// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCKEEPALIVESTATE_H
#define PCKEEPALIVESTATE_H


#import <Foundation/Foundation.h>


@interface PCKeepAliveState : NSObject

@property (nonatomic) unsigned char state; // ivar: _state
@property (nonatomic) unsigned char subState; // ivar: _subState


-(id)initWithKeepAliveState:(unsigned char)arg0 subState:(unsigned char)arg1 ;


@end


#endif