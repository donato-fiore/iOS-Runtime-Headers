// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRWRITEPARAMS_H
#define MTRWRITEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRWriteParams : NSObject

@property (retain, nonatomic) NSNumber *dataVersion; // ivar: _dataVersion
@property (retain, nonatomic) NSNumber *timedWriteTimeout; // ivar: _timedWriteTimeout


-(id)init;


@end


#endif