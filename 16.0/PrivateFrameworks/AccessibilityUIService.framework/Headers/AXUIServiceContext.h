// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUISERVICECONTEXT_H
#define AXUISERVICECONTEXT_H

@class NSMutableArray;
@protocol AXUIService, NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface AXUIServiceContext : NSObject

@property (retain, nonatomic) NSMutableArray *clientMessengers; // ivar: _clientMessengers
@property (readonly, nonatomic) NSUInteger clientsCount;
@property (retain, nonatomic) NSObject<AXUIService> *service; // ivar: _service
@property (copy, nonatomic) NSObject<NSObject><NSCopying> *serviceIdentifier; // ivar: _serviceIdentifier


-(BOOL)hasClientWithIdentifier:(id)arg0 ;
-(NSUInteger)_indexOfClientWithIdentifier:(id)arg0 ;
-(id)clientMessengerWithIdentifier:(id)arg0 ;
-(id)initWithService:(id)arg0 serviceIdentifier:(id)arg1 ;
-(void)addClientWithIdentifier:(id)arg0 connection:(id)arg1 ;
-(void)enumerateClientsUsingBlock:(id)arg0 ;
-(void)removeClientWithIdentifier:(id)arg0 ;


@end


#endif