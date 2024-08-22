// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COCOORDINATIONSERVICECLIENT_H
#define COCOORDINATIONSERVICECLIENT_H

@class NSXPCConnection;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface COCoordinationServiceClient : NSObject <NSCopying>



@property (readonly, retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithConnection:(id)arg0 ;


@end


#endif