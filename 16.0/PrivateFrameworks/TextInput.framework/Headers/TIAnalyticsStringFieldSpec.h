// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIANALYTICSSTRINGFIELDSPEC_H
#define TIANALYTICSSTRINGFIELDSPEC_H

@class NSArray;


#import "TIAnalyticsFieldSpec.h"

@interface TIAnalyticsStringFieldSpec : TIAnalyticsFieldSpec

@property (readonly, nonatomic) NSArray *allowedValues; // ivar: _allowedValues


-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)initWithName:(id)arg0 allowedValues:(id)arg1 ;


@end


#endif