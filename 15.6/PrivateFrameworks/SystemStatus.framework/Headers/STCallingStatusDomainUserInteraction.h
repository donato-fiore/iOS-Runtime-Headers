// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCALLINGSTATUSDOMAINUSERINTERACTION_H
#define STCALLINGSTATUSDOMAINUSERINTERACTION_H

@class NSString;
@protocol STStatusDomainUserInteraction;


#import "STCallingStatusDomainData.h"

@interface STCallingStatusDomainUserInteraction : STCallingStatusDomainData <STStatusDomainUserInteraction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithData:(id)arg0 ;


@end


#endif