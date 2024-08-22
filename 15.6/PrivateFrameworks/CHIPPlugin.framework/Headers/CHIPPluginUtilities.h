// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPLUGINUTILITIES_H
#define CHIPPLUGINUTILITIES_H

@class HMFObject;



@interface CHIPPluginUtilities : HMFObject



+(BOOL)compareUnorderedUniqueNumberArray:(id)arg0 withArray:(id)arg1 ;
+(NSInteger)nextServiceInstanceID:(NSInteger)arg0 previousCharacteristicsCount:(NSUInteger)arg1 ;
+(NSInteger)randomDiscriminator;
+(NSUInteger)randomNodeID;
+(id)chip_shortTypeFromUUID:(id)arg0 ;
+(id)identifierStringWithCHIPNodeID:(id)arg0 ;
+(id)setupIDFromSetupCode:(id)arg0 discriminator:(id)arg1 ;


@end


#endif