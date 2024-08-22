// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLARCHITECTURE_H
#define MTLARCHITECTURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTLArchitecture : NSObject

@property (readonly) int cpuSubtype; // ivar: _cpuSubtype
@property (readonly) int cpuType; // ivar: _cpuType
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSString *revision; // ivar: _revision


-(id)initWithCPUType:(int)arg0 cpuSubtype:(int)arg1 ;
-(id)initWithCPUType:(int)arg0 cpuSubtype:(int)arg1 revision:(id)arg2 ;
-(void)dealloc;


@end


#endif