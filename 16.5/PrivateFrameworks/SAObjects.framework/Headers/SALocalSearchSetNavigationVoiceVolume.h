// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALOCALSEARCHSETNAVIGATIONVOICEVOLUME_H
#define SALOCALSEARCHSETNAVIGATIONVOICEVOLUME_H

@class NSString;


#import "SADomainCommand.h"

@interface SALocalSearchSetNavigationVoiceVolume : SADomainCommand

@property (copy, nonatomic) NSString *volume;


+(id)setNavigationVoiceVolume;
+(id)setNavigationVoiceVolumeWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif