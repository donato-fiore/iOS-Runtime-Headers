// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASSQLITECOLLECTIONSCONSTRAINTPLANINFO_H
#define _PASSQLITECOLLECTIONSCONSTRAINTPLANINFO_H


#import <Foundation/Foundation.h>


@interface _PASSqliteCollectionsConstraintPlanInfo : NSObject {
    BOOL _unique;
    BOOL _omit;
    CGFloat _estimatedRows;
    CGFloat _estimatedCost;
}




-(id)initWithEstimatedRows:(CGFloat)arg0 estimatedCost:(CGFloat)arg1 unique:(BOOL)arg2 omit:(BOOL)arg3 ;


@end


#endif