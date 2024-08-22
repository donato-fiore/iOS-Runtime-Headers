// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPROPERTYLISTSERIALIZATION_H
#define CNPROPERTYLISTSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface CNPropertyListSerialization : NSObject



+(id)dataWithObject:(id)arg0 ;
+(id)dataWithObject:(id)arg0 error:(*id)arg1 ;
+(id)mutableObjectWithData:(id)arg0 ;
+(id)mutableObjectWithData:(id)arg0 error:(*id)arg1 ;
+(id)objectWithData:(id)arg0 ;
+(id)objectWithData:(id)arg0 error:(*id)arg1 ;
+(id)objectWithData:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif