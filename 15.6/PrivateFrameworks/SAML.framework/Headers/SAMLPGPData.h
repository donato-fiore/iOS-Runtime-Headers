// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMLPGPDATA_H
#define SAMLPGPDATA_H

@class NSData;


#import "SAMLBaseElement.h"

@interface SAMLPGPData : SAMLBaseElement

@property (readonly, nonatomic) NSData *keyId;
@property (readonly, nonatomic) NSData *packet;


+(id)createElement:(*id)arg0 ;


@end


#endif