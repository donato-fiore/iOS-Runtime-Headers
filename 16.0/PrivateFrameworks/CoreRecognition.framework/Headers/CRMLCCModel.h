// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRMLCCMODEL_H
#define CRMLCCMODEL_H

@class CRMLModel;



@interface CRMLCCModel : CRMLModel



-(id)creditcardMLResultsFromImage:(id)arg0 textFeatures:(id)arg1 invert:(BOOL)arg2 tryPatternMatch:(BOOL)arg3 ;
-(id)creditcardResultsFromImage:(id)arg0 ;
-(id)creditcardResultsFromImage:(id)arg0 textFeatures:(id)arg1 invert:(BOOL)arg2 tryPatternMatch:(BOOL)arg3 ;
-(id)init;


@end


#endif