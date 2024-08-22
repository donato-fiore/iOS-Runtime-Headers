// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLINTERSILOSERVICE_H
#define CLINTERSILOSERVICE_H

@class NSString;
@protocol CLIntersiloServiceProtocol, CLIntersiloUniverse;

#import <Foundation/Foundation.h>

#import "CLSilo.h"
#import "CLServiceVendor.h"

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol, CLIntersiloUniverse>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLSilo *silo; // ivar: _silo
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CLIntersiloUniverse> *universe;
@property (nonatomic) BOOL valid; // ivar: _valid
@property (readonly, nonatomic) CLServiceVendor *vendor; // ivar: _vendor


+(BOOL)isSupported;
+(id)getSilo;
+(void)becameFatallyBlocked:(id)arg0 index:(NSUInteger)arg1 ;
+(void)performSyncOnSilo:(id)arg0 invoker:(id)arg1 ;
-(id)init;
-(id)initWithInboundProtocol:(id)arg0 outboundProtocol:(id)arg1 ;


@end


#endif