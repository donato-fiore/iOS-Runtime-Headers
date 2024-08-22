// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLTMUTABLESSUINTENT_H
#define FLTMUTABLESSUINTENT_H

@class NSArray, NSString;


#import "FLTSSUIntent.h"

@interface FLTMutableSSUIntent : FLTSSUIntent

@property (copy, nonatomic) NSArray *examples;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *parameters;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif