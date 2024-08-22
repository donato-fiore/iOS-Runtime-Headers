// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXIPCSERVERCLIENTREGISTRATION_H
#define AXIPCSERVERCLIENTREGISTRATION_H

@class NSString;
@protocol AXIPCServerClientRegistrationDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface AXIPCServerClientRegistration : NSObject

@property (weak, nonatomic) NSObject<AXIPCServerClientRegistrationDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *invalidationSource; // ivar: _invalidationSource
@property (readonly, nonatomic) unsigned int port; // ivar: _port


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithPort:(unsigned int)arg0 identifier:(id)arg1 ;
-(void)dealloc;


@end


#endif