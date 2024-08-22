// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRUTILITIES_H
#define HMMTRUTILITIES_H

@class HMFObject;



@interface HMMTRUtilities : HMFObject



+(BOOL)compareUnorderedUniqueNumberArray:(id)arg0 withArray:(id)arg1 ;
+(NSInteger)nextServiceInstanceID:(NSInteger)arg0 previousCharacteristicsCount:(NSUInteger)arg1 ;
+(NSInteger)randomDiscriminator;
+(NSUInteger)randomNodeID;
+(id)_pathOfMTRClusterReadValue:(id)arg0 ;
+(id)encodeObject:(id)arg0 ;
+(id)hmmtr_shortTypeFromUUID:(id)arg0 ;
+(id)identifierStringWithCHIPNodeID:(id)arg0 ;
+(id)mtrBaseClusterValueFromMTRClusterReadResultValue:(id)arg0 forIdentify:(id)arg1 ;
+(id)mtrBaseClusterValueFromMTRClusterReportValue:(id)arg0 ;
+(id)setupIDFromSetupCode:(id)arg0 discriminator:(id)arg1 ;


@end


#endif