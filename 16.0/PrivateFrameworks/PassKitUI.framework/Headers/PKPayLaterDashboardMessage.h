// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERDASHBOARDMESSAGE_H
#define PKPAYLATERDASHBOARDMESSAGE_H


#import <Foundation/Foundation.h>

#import "PKDashboardPassMessage.h"

@interface PKPayLaterDashboardMessage : NSObject

@property (readonly, nonatomic) PKDashboardPassMessage *message; // ivar: _message
@property (nonatomic) NSInteger priority; // ivar: _priority


-(NSInteger)compare:(id)arg0 ;
-(id)initWithMessage:(id)arg0 priority:(NSInteger)arg1 ;


@end


#endif