// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIDINETWORKHOST_H
#define MIDINETWORKHOST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MIDINetworkHost : NSObject {
    *void _imp;
}


@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *netServiceDomain;
@property (readonly, nonatomic) NSString *netServiceName;
@property (readonly, nonatomic) NSUInteger port;


+(id)fromAddressAsText:(id)arg0 withName:(id)arg1 ;
+(id)hostWithName:(id)arg0 address:(id)arg1 port:(NSUInteger)arg2 ;
+(id)hostWithName:(id)arg0 netService:(id)arg1 ;
+(id)hostWithName:(id)arg0 netServiceName:(id)arg1 netServiceDomain:(id)arg2 ;
-(BOOL)hasSameAddressAs:(id)arg0 ;
-(id)description;
-(id)displayName;
-(id)host;
-(id)init;
-(void)dealloc;


@end


#endif