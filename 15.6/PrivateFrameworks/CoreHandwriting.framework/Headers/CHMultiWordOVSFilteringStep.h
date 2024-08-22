// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHMULTIWORDOVSFILTERINGSTEP_H
#define CHMULTIWORDOVSFILTERINGSTEP_H



#import "CHPostprocessingStep.h"
#import "CHStringOVSChecker.h"

@interface CHMultiWordOVSFilteringStep : CHPostprocessingStep

@property (nonatomic) CHStringOVSChecker *ovsStringChecker; // ivar: _ovsStringChecker


-(id)initWithOVSStringChecker:(id)arg0 ;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif