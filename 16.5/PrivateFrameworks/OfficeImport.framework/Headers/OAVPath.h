// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OAVPATH_H
#define OAVPATH_H


#import <Foundation/Foundation.h>


@interface OAVPath : NSObject



+(int)parseCommand:(*char *)arg0 ;
+(struct EshComputedValue )noneParam;
+(struct EshComputedValue )parseParam:(*char *)arg0 first:(BOOL)arg1 ;
+(void)readPath:(id)arg0 toGeometry:(id)arg1 ;
+(void)writePath:(id)arg0 toString:(id)arg1 ;


@end


#endif