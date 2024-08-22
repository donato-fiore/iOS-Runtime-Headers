// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSCONTENTFAILUREEVENT_H
#define CMSCONTENTFAILUREEVENT_H



#import "CMSBaseContentFailureEvent.h"

@interface CMSContentFailureEvent : CMSBaseContentFailureEvent

@property (nonatomic) BOOL didReachMaxRetries; // ivar: _didReachMaxRetries
@property (nonatomic) BOOL doesServiceSupportPlaybackFailureRecovery; // ivar: _doesServiceSupportPlaybackFailureRecovery
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode


-(id)encoded;
-(id)initWithServiceID:(id)arg0 sessionIdentifier:(id)arg1 errorCode:(NSInteger)arg2 ;
-(id)initWithServiceID:(id)arg0 sessionIdentifier:(id)arg1 errorCode:(NSInteger)arg2 doesServiceSupportPlaybackFailureRecovery:(BOOL)arg3 ;


@end


#endif