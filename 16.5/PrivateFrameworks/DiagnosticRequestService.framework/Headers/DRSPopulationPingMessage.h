// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSPOPULATIONPINGMESSAGE_H
#define DRSPOPULATIONPINGMESSAGE_H



#import "DRSTaskingSystemMessage.h"

@interface DRSPopulationPingMessage : DRSTaskingSystemMessage



+(id)messageType;
-(BOOL)_versionIsSupported:(id)arg0 ;
-(id)init;
-(id)initWithJSONDict:(id)arg0 ;


@end


#endif