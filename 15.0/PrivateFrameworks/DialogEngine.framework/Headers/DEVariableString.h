// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEVARIABLESTRING_H
#define DEVARIABLESTRING_H

@class NSString;


#import "DEVariable.h"

@interface DEVariableString : DEVariable

@property (readonly) NSString *printValue;
@property (readonly) NSString *speakValue;


-(id)init;
-(id)initWithName:(id)arg0 print:(id)arg1 speak:(id)arg2 ;
-(id)initWithName:(id)arg0 string:(id)arg1 ;
-(id)initWithSharedPtr:(*void)arg0 ;
-(void)setValuePrint:(id)arg0 speak:(id)arg1 ;


@end


#endif