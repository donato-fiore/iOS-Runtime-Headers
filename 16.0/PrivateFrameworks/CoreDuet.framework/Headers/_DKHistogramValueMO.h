// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKHISTOGRAMVALUEMO_H
#define _DKHISTOGRAMVALUEMO_H

@class NSManagedObject, NSNumber, NSString;


#import "_DKHistogramMO.h"

@interface _DKHistogramValueMO : NSManagedObject

@property (copy, nonatomic) NSNumber *count;
@property (retain, nonatomic) _DKHistogramMO *histogram;
@property (copy, nonatomic) NSNumber *integerValue;
@property (copy, nonatomic) NSString *stringValue;


+(id)fetchRequest;


@end


#endif