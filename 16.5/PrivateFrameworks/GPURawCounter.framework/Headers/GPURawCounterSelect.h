// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GPURAWCOUNTERSELECT_H
#define GPURAWCOUNTERSELECT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface GPURawCounterSelect : NSObject

@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSDictionary *options; // ivar: _options
@property unsigned int width; // ivar: _width


+(id)selectWithName:(id)arg0 ;
+(id)selectWithName:(id)arg0 options:(id)arg1 ;
+(id)selectWithName:(id)arg0 width:(unsigned int)arg1 ;
-(id)description;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 options:(id)arg1 ;
-(id)initWithName:(id)arg0 width:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif