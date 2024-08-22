// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCRCARGUMENTHOLDER_H
#define SCRCARGUMENTHOLDER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SCRCArgumentHolder : NSObject

@property (readonly, nonatomic) SEL action; // ivar: _action
@property (copy, nonatomic) NSString *argument; // ivar: _argument
@property (readonly, copy, nonatomic) NSString *argumentDescription; // ivar: _argumentDescription
@property (readonly, copy, nonatomic) NSString *option; // ivar: _option
@property (readonly, nonatomic) BOOL required; // ivar: _required
@property (readonly, weak, nonatomic) id *target; // ivar: _target


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)process;
-(NSInteger)compare:(id)arg0 ;
-(id)init;
-(id)initWithArgument:(id)arg0 option:(id)arg1 description:(id)arg2 target:(id)arg3 action:(SEL)arg4 required:(BOOL)arg5 ;


@end


#endif