// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMCONTACTDETAILSENT_H
#define SGMCONTACTDETAILSENT_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMContactDetailSent : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 source:(struct SGMDocumentType_ )arg1 detail:(struct SGMContactDetailType_ )arg2 foundIn:(struct SGMContactDetailFoundIn_ )arg3 hasName:(struct SGMTypeSafeBool_ )arg4 tokens:(struct SGMLowCount_ )arg5 ;


@end


#endif