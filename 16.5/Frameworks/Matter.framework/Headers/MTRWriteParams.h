// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRWRITEPARAMS_H
#define MTRWRITEPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRWriteParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *dataVersion; // ivar: _dataVersion
@property (copy, nonatomic) NSNumber *timedWriteTimeout; // ivar: _timedWriteTimeout


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif