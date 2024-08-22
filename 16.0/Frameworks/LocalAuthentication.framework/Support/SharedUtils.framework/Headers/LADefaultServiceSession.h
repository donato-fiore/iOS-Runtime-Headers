// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LADEFAULTSERVICESESSION_H
#define LADEFAULTSERVICESESSION_H

@class NSString, NSUUID;
@protocol LAServiceSession, LAService;

#import <Foundation/Foundation.h>


@interface LADefaultServiceSession : NSObject <LAServiceSession>



@property (readonly, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<LAService> *service; // ivar: _service
@property (readonly, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly, nonatomic) NSUUID *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;


-(id)initWithService:(id)arg0 serviceType:(id)arg1 client:(id)arg2 ;
-(void)dealloc;


@end


#endif