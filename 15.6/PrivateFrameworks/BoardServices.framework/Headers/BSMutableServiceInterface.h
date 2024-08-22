// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSMUTABLESERVICEINTERFACE_H
#define BSMUTABLESERVICEINTERFACE_H

@class BSObjCProtocol, NSString;


#import "BSServiceInterface.h"

@interface BSMutableServiceInterface : BSServiceInterface

@property (copy, nonatomic) BSObjCProtocol *client;
@property (nonatomic) NSInteger clientMessagingExpectation;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) BSObjCProtocol *server;


+(id)interfaceWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif