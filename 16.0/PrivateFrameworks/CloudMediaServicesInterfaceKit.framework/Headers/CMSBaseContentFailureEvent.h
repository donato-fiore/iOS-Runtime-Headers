// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSBASECONTENTFAILUREEVENT_H
#define CMSBASECONTENTFAILUREEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CMSBaseContentFailureEvent : NSObject

@property (retain, nonatomic) NSString *eventName; // ivar: _eventName
@property (retain, nonatomic) NSString *serviceID; // ivar: _serviceID
@property (retain, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier


-(id)encoded;
-(id)initWithServiceID:(id)arg0 sessionIdentifier:(id)arg1 ;


@end


#endif