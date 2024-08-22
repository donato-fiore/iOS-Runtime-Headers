// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEWEATHERSERVICECONNECTION_H
#define NEWEATHERSERVICECONNECTION_H

@class WFServiceConnection;

#import <Foundation/Foundation.h>


@interface NEWeatherServiceConnection : NSObject

@property (readonly, nonatomic) WFServiceConnection *connection; // ivar: _connection


-(id)init;
-(void)enqueueRequest:(id)arg0 ;


@end


#endif