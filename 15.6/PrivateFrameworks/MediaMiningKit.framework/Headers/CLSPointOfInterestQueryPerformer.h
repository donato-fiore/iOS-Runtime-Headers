// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSPOINTOFINTERESTQUERYPERFORMER_H
#define CLSPOINTOFINTERESTQUERYPERFORMER_H



#import "CLSBusinessItemGenericQueryPerformer.h"

@interface CLSPointOfInterestQueryPerformer : CLSBusinessItemGenericQueryPerformer



+(CGFloat)defaultPrecision;
+(id)categories;
-(BOOL)shouldQueryItemsForRegion:(id)arg0 selectedRegions:(id)arg1 ;
-(id)cache;


@end


#endif