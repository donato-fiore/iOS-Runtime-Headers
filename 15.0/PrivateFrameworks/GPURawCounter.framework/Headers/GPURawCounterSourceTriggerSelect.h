// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GPURAWCOUNTERSOURCETRIGGERSELECT_H
#define GPURAWCOUNTERSOURCETRIGGERSELECT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface GPURawCounterSourceTriggerSelect : NSObject

@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSDictionary *options; // ivar: _options


+(id)selectWithName:(id)arg0 options:(id)arg1 ;
-(id)description;
-(id)initWithName:(id)arg0 options:(id)arg1 ;
-(void)dealloc;


@end


#endif