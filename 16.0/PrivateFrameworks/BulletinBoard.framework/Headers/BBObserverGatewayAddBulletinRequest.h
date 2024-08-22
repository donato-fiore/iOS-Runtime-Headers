// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BBOBSERVERGATEWAYADDBULLETINREQUEST_H
#define BBOBSERVERGATEWAYADDBULLETINREQUEST_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface BBObserverGatewayAddBulletinRequest : NSObject

@property (copy, nonatomic) NSString *bulletinID; // ivar: _bulletinID
@property (copy, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (retain, nonatomic) NSDate *timeout; // ivar: _timeout
@property (copy, nonatomic) id *timeoutHandler; // ivar: _timeoutHandler




@end


#endif