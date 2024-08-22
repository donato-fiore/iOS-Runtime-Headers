// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEVARIABLEBOOLEAN_H
#define DEVARIABLEBOOLEAN_H



#import "DEVariable.h"

@interface DEVariableBoolean : DEVariable



-(BOOL)getValue;
-(id)init;
-(id)initWithName:(id)arg0 value:(BOOL)arg1 ;
-(id)initWithSharedPtr:(*void)arg0 ;
-(void)setValue:(BOOL)arg0 ;


@end


#endif