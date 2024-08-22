// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GPURAWCOUNTERSOURCETRIGGER_H
#define _GPURAWCOUNTERSOURCETRIGGER_H

@class NSString, NSDictionary;
@protocol GPURawCounterSourceTrigger;

#import <Foundation/Foundation.h>


@interface _GPURawCounterSourceTrigger : NSObject <GPURawCounterSourceTrigger>



@property (readonly, copy) NSString *description; // ivar: _description
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSDictionary *options; // ivar: _options


-(id)initWithName:(id)arg0 description:(id)arg1 options:(id)arg2 ;
-(void)dealloc;


@end


#endif