// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRUNITTESTINGCLUSTERTESTEVENTEVENT_H
#define MTRUNITTESTINGCLUSTERTESTEVENTEVENT_H

@class NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRUnitTestingClusterSimpleStruct.h"

@interface MTRUnitTestingClusterTestEventEvent : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *arg1; // ivar: _arg1
@property (copy, nonatomic) NSNumber *arg2; // ivar: _arg2
@property (copy, nonatomic) NSNumber *arg3; // ivar: _arg3
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *arg4; // ivar: _arg4
@property (copy, nonatomic) NSArray *arg5; // ivar: _arg5
@property (copy, nonatomic) NSArray *arg6; // ivar: _arg6


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif