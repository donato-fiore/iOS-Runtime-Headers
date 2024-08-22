// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRUNITTESTINGCLUSTERTESTSTRUCTARRAYARGUMENTRESPONSEPARAMS_H
#define MTRUNITTESTINGCLUSTERTESTSTRUCTARRAYARGUMENTRESPONSEPARAMS_H

@class NSArray, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRUnitTestingClusterTestStructArrayArgumentResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *arg1; // ivar: _arg1
@property (copy, nonatomic) NSArray *arg2; // ivar: _arg2
@property (copy, nonatomic) NSArray *arg3; // ivar: _arg3
@property (copy, nonatomic) NSArray *arg4; // ivar: _arg4
@property (copy, nonatomic) NSNumber *arg5; // ivar: _arg5
@property (copy, nonatomic) NSNumber *arg6; // ivar: _arg6
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif