// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGCOMMONTITLEUTILITY_H
#define PGCOMMONTITLEUTILITY_H


#import <Foundation/Foundation.h>


@interface PGCommonTitleUtility : NSObject



+(BOOL)containsCelebrationForDateNodes:(id)arg0 holidayName:(*id)arg1 titleGenerationContext:(id)arg2 graph:(id)arg3 ;
+(BOOL)isLargeCountryForAddressNode:(id)arg0 locationHelper:(id)arg1 ;
+(NSUInteger)dimensionForLabel:(id)arg0 ;
+(id)addressNodesFromMomentNodes:(id)arg0 ;
+(id)bestAddressNodeForMomentNodes:(id)arg0 ;
+(id)dateNodesFromMomentNodes:(id)arg0 ;
+(id)holidayNameForDateNodes:(id)arg0 ;
+(id)locationLabelForDimension:(NSUInteger)arg0 ;
+(id)titleWithLineBreakForTitle:(id)arg0 ;
+(id)titleWithLineBreakForTitle:(id)arg0 andUsedNames:(id)arg1 ;
+(id)titleWithNoLineBreakSpaceForTitle:(id)arg0 andUsedNames:(id)arg1 ;
+(struct _NSRange )_closestSpaceMatchFromMatches:(id)arg0 withUsedNameRange:(struct _NSRange )arg1 searchForward:(BOOL)arg2 ;
+(void)startAndEndDateNodeFromDateNodes:(id)arg0 startDateNode:(*id)arg1 endDateNode:(*id)arg2 ;


@end


#endif