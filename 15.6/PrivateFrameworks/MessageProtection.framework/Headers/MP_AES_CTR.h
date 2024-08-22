// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MP_AES_CTR_H
#define MP_AES_CTR_H


#import <Foundation/Foundation.h>


@interface MP_AES_CTR : NSObject



+(id)crypt:(id)arg0 key:(id)arg1 IV:(id)arg2 ;
+(id)decrypt:(id)arg0 key:(id)arg1 IV:(id)arg2 ;
+(id)encrypt:(id)arg0 key:(id)arg1 IV:(id)arg2 ;


@end


#endif