// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPENDPOINTLISTENERWRAPPER_H
#define CPENDPOINTLISTENERWRAPPER_H

@class NSString;
@protocol BSXPCCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CPEndpointListenerWrapper : NSObject <BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_xpc_object> *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithXPCDictionary:(id)arg0 ;
-(id)initWithXPCEndpoint:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif