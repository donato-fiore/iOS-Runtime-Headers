// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTATUSKITMESSAGE_H
#define MPSTATUSKITMESSAGE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MPStatusKitMessage : NSObject

@property (readonly, nonatomic) NSData *encryptedMessage; // ivar: _encryptedMessage
@property (readonly, nonatomic) unsigned short index; // ivar: _index
@property (readonly, nonatomic) NSData *signature; // ivar: _signature


-(id)initWithIndex:(unsigned short)arg0 encryptedMessage:(id)arg1 signature:(id)arg2 ;


@end


#endif