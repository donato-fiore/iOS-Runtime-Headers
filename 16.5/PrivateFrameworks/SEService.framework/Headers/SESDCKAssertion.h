// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SESDCKASSERTION_H
#define SESDCKASSERTION_H

@class NSString;
@protocol SESDCKAssertionCallbackInterface, SESDCKAssertionInterface><NSXPCProxyCreating;

#import <Foundation/Foundation.h>


@interface SESDCKAssertion : NSObject <SESDCKAssertionCallbackInterface>

 {
    NSObject<SESDCKAssertionInterface><NSXPCProxyCreating> *_proxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *keyIdentifier; // ivar: _keyIdentifier
@property (readonly) Class superclass;


-(id)initWithKeyIdentifier:(id)arg0 ;
-(id)proxy;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)didInvalidate;
-(void)invalidate;
-(void)setProxy:(id)arg0 ;


@end


#endif