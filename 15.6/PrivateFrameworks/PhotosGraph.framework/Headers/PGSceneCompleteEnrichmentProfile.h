// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSCENECOMPLETEENRICHMENTPROFILE_H
#define PGSCENECOMPLETEENRICHMENTPROFILE_H



#import "PGDefaultEnrichmentProfile.h"

@interface PGSceneCompleteEnrichmentProfile : PGDefaultEnrichmentProfile



+(NSInteger)cardinalModeForSummary;
+(NSUInteger)durationForSummary;
-(BOOL)canEnrichHighlight:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(id)curationOptions;
-(id)identifier;
-(unsigned short)targetEnrichmentState;


@end


#endif