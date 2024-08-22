// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BMLOCATIONLIBRARYNODE_H
#define _BMLOCATIONLIBRARYNODE_H

@class BMLibraryNode;



@interface _BMLocationLibraryNode : BMLibraryNode



+(id)HashedCoordinates;
+(id)MicroLocationVisit;
+(id)Motion;
+(id)SignificantVisit;
+(id)configurationForHashedCoordinates;
+(id)configurationForMicroLocationVisit;
+(id)configurationForMotion;
+(id)configurationForSignificantVisit;
+(id)identifier;
+(id)storeConfigurationForHashedCoordinates;
+(id)storeConfigurationForMicroLocationVisit;
+(id)storeConfigurationForMotion;
+(id)storeConfigurationForSignificantVisit;
+(id)streamNames;
+(id)streamWithName:(id)arg0 ;
+(id)sublibraries;
+(id)syncPolicyForHashedCoordinates;
+(id)syncPolicyForMicroLocationVisit;
+(id)syncPolicyForMotion;
+(id)syncPolicyForSignificantVisit;
+(id)validKeyPaths;


@end


#endif