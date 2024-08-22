// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPARTIALENRICHMENTPROFILE_H
#define PGPARTIALENRICHMENTPROFILE_H



#import "PGDefaultEnrichmentProfile.h"

@interface PGPartialEnrichmentProfile : PGDefaultEnrichmentProfile



-(BOOL)canEnrichHighlight:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(id)identifier;
-(unsigned short)targetEnrichmentState;


@end


#endif