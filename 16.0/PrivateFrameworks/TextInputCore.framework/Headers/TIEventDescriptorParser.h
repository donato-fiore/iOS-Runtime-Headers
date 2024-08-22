// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIEVENTDESCRIPTORPARSER_H
#define TIEVENTDESCRIPTORPARSER_H



#import "TIDescriptorParser.h"

@interface TIEventDescriptorParser : TIDescriptorParser



-(id)init;
-(id)parseBooleanFieldSpecWithName:(id)arg0 fromConfig:(id)arg1 errors:(id)arg2 ;
-(id)parseFloatFieldSpecWithName:(id)arg0 fromConfig:(id)arg1 errors:(id)arg2 ;
-(id)parseIntegerFieldSpecWithName:(id)arg0 fromConfig:(id)arg1 errors:(id)arg2 ;
-(id)parseStringFieldSpecWithName:(id)arg0 fromConfig:(id)arg1 errors:(id)arg2 ;
-(void)parseEventDescriptor:(*id)arg0 andEventSpec:(*id)arg1 withName:(id)arg2 fromConfig:(id)arg3 errors:(id)arg4 ;
-(void)parseEventDescriptors:(id)arg0 andEventSpecs:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;
-(void)parseFieldDescriptor:(*id)arg0 andFieldSpec:(*id)arg1 withName:(id)arg2 fromConfig:(id)arg3 errors:(id)arg4 ;


@end


#endif