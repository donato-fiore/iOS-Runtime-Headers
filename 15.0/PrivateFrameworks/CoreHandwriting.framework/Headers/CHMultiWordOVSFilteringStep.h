// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHMULTIWORDOVSFILTERINGSTEP_H
#define CHMULTIWORDOVSFILTERINGSTEP_H



#import "CHPostprocessingStep.h"
#import "CHRecognizer.h"

@interface CHMultiWordOVSFilteringStep : CHPostprocessingStep

@property (nonatomic) CHRecognizer *recognizer; // ivar: _recognizer


-(id)initWithRecognizer:(id)arg0 ;
-(id)process:(id)arg0 ;


@end


#endif