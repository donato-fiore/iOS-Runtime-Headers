// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSAPPSTOREREGIONVALIDATION_H
#define TPSAPPSTOREREGIONVALIDATION_H



#import "TPSRegionsValidation.h"

@interface TPSAppStoreRegionValidation : TPSRegionsValidation



-(BOOL)hasStoreFrontRegionPrefix:(id)arg0 fromRegions:(id)arg1 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif