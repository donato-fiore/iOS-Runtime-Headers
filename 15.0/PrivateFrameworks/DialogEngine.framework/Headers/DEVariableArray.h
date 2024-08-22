// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEVARIABLEARRAY_H
#define DEVARIABLEARRAY_H



#import "DEVariable.h"

@interface DEVariableArray : DEVariable



-(NSUInteger)getLength;
-(id)getItem:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithSharedPtr:(*void)arg0 ;
-(void)addItem:(id)arg0 ;


@end


#endif