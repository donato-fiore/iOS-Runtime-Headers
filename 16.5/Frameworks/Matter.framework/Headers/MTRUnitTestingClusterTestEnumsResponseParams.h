// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRUNITTESTINGCLUSTERTESTENUMSRESPONSEPARAMS_H
#define MTRUNITTESTINGCLUSTERTESTENUMSRESPONSEPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRUnitTestingClusterTestEnumsResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *arg1; // ivar: _arg1
@property (copy, nonatomic) NSNumber *arg2; // ivar: _arg2
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif