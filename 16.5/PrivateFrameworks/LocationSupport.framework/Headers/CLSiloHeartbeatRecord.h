// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSILOHEARTBEATRECORD_H
#define CLSILOHEARTBEATRECORD_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CLSilo.h"

@interface CLSiloHeartbeatRecord : NSObject

@property (readonly, nonatomic) int ackCount; // ivar: _ackCount
@property (nonatomic) int residentCount; // ivar: _residentCount
@property (readonly, nonatomic) CLSilo *silo; // ivar: _silo
@property (readonly, nonatomic) Class svcClass; // ivar: _svcClass
@property (readonly) NSString *svcName; // ivar: _svcName
@property (readonly, nonatomic) int synCount; // ivar: _synCount


-(id)initTrackingServiceClass:(Class)arg0 name:(id)arg1 ;
-(void)ack;
-(void)syn;


@end


#endif