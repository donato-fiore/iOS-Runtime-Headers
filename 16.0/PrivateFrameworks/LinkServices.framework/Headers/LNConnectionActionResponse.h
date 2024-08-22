// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNCONNECTIONACTIONRESPONSE_H
#define LNCONNECTIONACTIONRESPONSE_H

@class NSString, NSXPCListenerEndpoint;
@protocol BSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNConnectionActionResponse : NSObject <BSXPCCoding, NSSecureCoding>



@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // ivar: _listenerEndpoint
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)initWithXPCListenerEndpoint:(id)arg0 auditToken:(struct ? )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif