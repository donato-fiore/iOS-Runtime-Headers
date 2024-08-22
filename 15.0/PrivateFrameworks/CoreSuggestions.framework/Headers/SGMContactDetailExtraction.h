// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMCONTACTDETAILEXTRACTION_H
#define SGMCONTACTDETAILEXTRACTION_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMContactDetailExtraction : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 source:(struct SGMDocumentType_ )arg1 signature:(struct SGMTypeSafeBool_ )arg2 detail:(struct SGMContactDetailType_ )arg3 outcome:(struct SGMContactDetailExtractionOutcome_ )arg4 foundInSenderCNContact:(struct SGMContactDetailOwner_ )arg5 extractionModelVersion:(NSUInteger)arg6 isUnlikelyPhone:(struct SGMTypeSafeBool_ )arg7 signatureExtractionSource:(struct SGMContactDetailExtractionSignatureSource_ )arg8 ;


@end


#endif