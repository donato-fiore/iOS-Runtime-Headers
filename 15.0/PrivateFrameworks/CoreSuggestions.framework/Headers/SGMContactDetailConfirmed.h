// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMCONTACTDETAILCONFIRMED_H
#define SGMCONTACTDETAILCONFIRMED_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMContactDetailConfirmed : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 type:(struct SGMContactDetailType_ )arg1 extracted:(struct SGMDetailExtractionType_ )arg2 extractionModelVersion:(NSUInteger)arg3 ;


@end


#endif