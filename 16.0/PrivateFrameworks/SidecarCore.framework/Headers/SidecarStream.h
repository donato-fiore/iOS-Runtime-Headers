// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIDECARSTREAM_H
#define SIDECARSTREAM_H

@class NSString, RPStreamSession;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SidecarSession.h"

@interface SidecarStream : NSObject <NSSecureCoding>

 {
    NSString *_identifier;
    RPStreamSession *_rapportStream;
    id *_handler;
    SidecarSession *_session;
    uint8_t _status;
    uint8_t _activated;
}


@property (readonly) NSInteger fileDescriptor;
@property (readonly) NSUInteger flags;
@property (copy) id *handler;
@property (readonly) NSString *identifier;
@property (readonly, nonatomic) ? nwClientID;
@property (readonly) RPStreamSession *rapportStream;
@property (readonly) SidecarSession *session;
@property (readonly) NSUInteger status;
@property (readonly, nonatomic) NSInteger transport;
@property (readonly) NSInteger type;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 rapportStream:(id)arg1 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)sendOPACK:(id)arg0 completion:(id)arg1 ;


@end


#endif