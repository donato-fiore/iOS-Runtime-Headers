// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSSERVICEINTERFACE_H
#define BSSERVICEINTERFACE_H

@class NSString, BSObjCProtocol;
@protocol NSCopying, NSMutableCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface BSServiceInterface : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>

 {
    NSString *_identifier;
    BSObjCProtocol *_server;
    BSObjCProtocol *_client;
    *__CFBoolean _clientWaitsForActivation;
}


@property (readonly, copy, nonatomic) BSObjCProtocol *client;
@property (readonly, nonatomic) NSInteger clientMessagingExpectation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) BSObjCProtocol *server;
@property (readonly) Class superclass;


+(id)interfaceWithServer:(id)arg0 client:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif