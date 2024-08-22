// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYDCLIENTPROTOCOLPROXY_H
#define SYDCLIENTPROTOCOLPROXY_H

@protocol SYDClientProtocol;

#import <Foundation/Foundation.h>


@interface SYDClientProtocolProxy : NSObject <SYDClientProtocol>



@property (weak, nonatomic) NSObject<SYDClientProtocol> *target; // ivar: _target


-(id)initWithTarget:(id)arg0 ;
-(void)storeDidChangeWithStoreID:(id)arg0 changeDictionary:(id)arg1 reply:(id)arg2 ;


@end


#endif