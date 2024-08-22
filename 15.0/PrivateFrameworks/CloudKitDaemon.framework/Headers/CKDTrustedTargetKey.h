// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDTRUSTEDTARGETKEY_H
#define CKDTRUSTEDTARGETKEY_H

@class NSData;

#import <Foundation/Foundation.h>


@interface CKDTrustedTargetKey : NSObject

@property (retain, nonatomic) NSData *key; // ivar: _key


-(id)decrypt:(id)arg0 ;
-(id)encrypt:(id)arg0 ;
-(id)init;


@end


#endif