// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCALSEARCHSETNAVIGATIONVOICEMUTED_H
#define SALOCALSEARCHSETNAVIGATIONVOICEMUTED_H



#import "SADomainCommand.h"

@interface SALocalSearchSetNavigationVoiceMuted : SADomainCommand

@property (nonatomic) BOOL voiceMuted;


+(id)setNavigationVoiceMuted;
+(id)setNavigationVoiceMutedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif