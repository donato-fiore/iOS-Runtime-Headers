// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPSETLASTOPENDATEOPERATION_H
#define FPSETLASTOPENDATEOPERATION_H

@class NSArray, NSDate;


#import "FPTransformOperation.h"

@interface FPSetLastOpenDateOperation : FPTransformOperation {
    NSArray *_items;
    NSDate *_date;
}




-(NSUInteger)transformItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)fp_prettyDescription;
-(id)initWithItems:(id)arg0 date:(id)arg1 ;
-(id)replicateForItems:(id)arg0 ;


@end


#endif