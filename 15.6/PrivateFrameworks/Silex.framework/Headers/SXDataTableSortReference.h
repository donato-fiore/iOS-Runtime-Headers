// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDATATABLESORTREFERENCE_H
#define SXDATATABLESORTREFERENCE_H

@class NSString;


#import "SXJSONObject.h"

@interface SXDataTableSortReference : SXJSONObject

@property (readonly, nonatomic) NSString *descriptor;
@property (readonly, nonatomic) NSUInteger direction;


-(NSUInteger)directionWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif