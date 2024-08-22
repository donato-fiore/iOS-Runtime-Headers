// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGCOMPLETEENRICHMENTPROFILE_H
#define PGCOMPLETEENRICHMENTPROFILE_H



#import "PGDefaultEnrichmentProfile.h"

@interface PGCompleteEnrichmentProfile : PGDefaultEnrichmentProfile



+(NSInteger)cardinalModeForSummary;
+(NSUInteger)durationForSummary;
-(BOOL)canEnrichHighlight:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(id)curationOptions;
-(id)identifier;
-(unsigned short)targetEnrichmentState;


@end


#endif