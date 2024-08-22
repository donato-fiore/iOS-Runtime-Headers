// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef URTALERTCONNECTION_H
#define URTALERTCONNECTION_H

@class BSServiceConnection;

#import <Foundation/Foundation.h>

#import "URTAlert.h"

@interface URTAlertConnection : NSObject

@property (retain, nonatomic) URTAlert *alert; // ivar: _alert
@property (readonly, nonatomic) BSServiceConnection *connection; // ivar: _connection


-(id)initWithConnection:(id)arg0 ;


@end


#endif