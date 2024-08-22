// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMCONTACTCONFIRMED_H
#define SGMCONTACTCONFIRMED_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMContactConfirmed : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 app:(struct SGMBannerDisplayApp_ )arg1 firstNameAdj:(struct SGMTypeSafeBool_ )arg2 lastNameAdj:(struct SGMTypeSafeBool_ )arg3 middleNameAdj:(struct SGMTypeSafeBool_ )arg4 isUpdate:(struct SGMTypeSafeBool_ )arg5 extracted:(struct SGMBannerExtractionType_ )arg6 extractionModelVersion:(NSUInteger)arg7 selfId:(struct SGMTypeSafeBool_ )arg8 contactDetail:(struct SGMContactDetailType_ )arg9 ;


@end


#endif