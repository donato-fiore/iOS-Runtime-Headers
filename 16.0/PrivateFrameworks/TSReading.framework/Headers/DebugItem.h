// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEBUGITEM_H
#define DEBUGITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DebugItem : NSObject

@property (readonly, nonatomic) SEL action; // ivar: _action
@property (readonly, nonatomic) id *target; // ivar: _target
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)dealloc;


@end


#endif