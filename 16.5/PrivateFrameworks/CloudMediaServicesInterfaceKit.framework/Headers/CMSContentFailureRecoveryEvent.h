// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSCONTENTFAILURERECOVERYEVENT_H
#define CMSCONTENTFAILURERECOVERYEVENT_H



#import "CMSBaseContentFailureEvent.h"

@interface CMSContentFailureRecoveryEvent : CMSBaseContentFailureEvent

@property (nonatomic) NSUInteger recoveryDuration; // ivar: _recoveryDuration


-(id)encoded;
-(id)initWithSessionID:(id)arg0 sessionIdentifier:(id)arg1 recoveryDuration:(NSUInteger)arg2 ;


@end


#endif