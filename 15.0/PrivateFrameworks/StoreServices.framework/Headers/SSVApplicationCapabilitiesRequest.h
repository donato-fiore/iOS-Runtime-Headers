// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVAPPLICATIONCAPABILITIESREQUEST_H
#define SSVAPPLICATIONCAPABILITIESREQUEST_H

@class NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSVApplicationCapabilitiesRequest : SSRequest <SSXPCCoding>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithCapabilitiesResponseBlock:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif