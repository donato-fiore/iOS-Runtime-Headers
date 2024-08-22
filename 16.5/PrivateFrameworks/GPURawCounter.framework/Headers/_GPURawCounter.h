// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GPURAWCOUNTER_H
#define _GPURAWCOUNTER_H

@class NSString;
@protocol GPURawCounter;

#import <Foundation/Foundation.h>


@interface _GPURawCounter : NSObject <GPURawCounter>



@property (readonly) NSUInteger counterValueType; // ivar: _counterValueType
@property (readonly, copy) NSString *description; // ivar: _description
@property (readonly, copy) NSString *name; // ivar: _name


-(id)initWithName:(id)arg0 description:(id)arg1 valueType:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif