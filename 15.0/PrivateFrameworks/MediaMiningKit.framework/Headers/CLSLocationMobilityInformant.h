// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSLOCATIONMOBILITYINFORMANT_H
#define CLSLOCATIONMOBILITYINFORMANT_H



#import "CLSInformant.h"

@interface CLSLocationMobilityInformant : CLSInformant



+(id)classIdentifier;
+(id)familyIdentifier;
+(id)informantDependenciesIdentifiers;
-(id)_locationMobilityClueForInvestigation:(id)arg0 ;
-(id)gatherCluesForInvestigation:(id)arg0 progressBlock:(id)arg1 ;


@end


#endif