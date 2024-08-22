// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADESPRESSOWRAPPER_H
#define ADESPRESSOWRAPPER_H



#import "ADEspressoRunner.h"

@interface ADEspressoWrapper : ADEspressoRunner



-(NSInteger)execute;
-(id)initWithPath:(id)arg0 forEngine:(NSUInteger)arg1 configurationName:(id)arg2 ;


@end


#endif