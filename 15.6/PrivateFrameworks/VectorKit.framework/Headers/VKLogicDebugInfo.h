// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKLOGICDEBUGINFO_H
#define VKLOGICDEBUGINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VKLogicDebugInfo : NSObject

@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


-(id)initWithName:(id)arg0 identifier:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif