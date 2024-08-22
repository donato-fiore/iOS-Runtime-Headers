// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef URTALERTSERVICEDELEGATEPROXY_H
#define URTALERTSERVICEDELEGATEPROXY_H

@class NSString;
@protocol URTAlertClientToServerInterface;

#import <Foundation/Foundation.h>

#import "URTAlertService.h"

@interface URTAlertServiceDelegateProxy : NSObject <URTAlertClientToServerInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) URTAlertService *service; // ivar: _service
@property (readonly) Class superclass;


-(id)initWithService:(id)arg0 ;
-(void)dismissAlert:(id)arg0 ;
-(void)presentAlert:(id)arg0 ;


@end


#endif