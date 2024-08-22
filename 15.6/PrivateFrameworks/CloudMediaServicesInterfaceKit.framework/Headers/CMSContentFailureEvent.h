// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMSCONTENTFAILUREEVENT_H
#define CMSCONTENTFAILUREEVENT_H



#import "CMSBaseContentFailureEvent.h"

@interface CMSContentFailureEvent : CMSBaseContentFailureEvent

@property (nonatomic) BOOL didReachMaxRetries; // ivar: _didReachMaxRetries
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode


-(id)encoded;
-(id)initWithSessionID:(id)arg0 sessionIdentifier:(id)arg1 errorCode:(NSInteger)arg2 ;


@end


#endif