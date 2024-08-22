// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPPLUGINUTILITIES_H
#define CHIPPLUGINUTILITIES_H

@class HMFObject;



@interface CHIPPluginUtilities : HMFObject



+(NSInteger)randomDiscriminator;
+(id)chip_shortTypeFromUUID:(id)arg0 ;
+(id)identifierStringWithCHIPNodeID:(id)arg0 ;
+(id)setupIDFromSetupCode:(id)arg0 discriminator:(id)arg1 ;


@end


#endif