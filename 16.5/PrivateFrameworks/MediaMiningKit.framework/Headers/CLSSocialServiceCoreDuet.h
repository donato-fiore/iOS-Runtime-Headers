// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSSOCIALSERVICECOREDUET_H
#define CLSSOCIALSERVICECOREDUET_H



#import "CLSSocialService.h"
#import "CLSSocialServiceContacts.h"

@interface CLSSocialServiceCoreDuet : CLSSocialService

@property (retain) CLSSocialServiceContacts *contactSocialService; // ivar: _contactSocialService


-(id)coreDuetPersonSuggestionsOnDate:(id)arg0 ;
-(id)init;


@end


#endif