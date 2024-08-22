// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSHIDEVENTAUTHENTICATIONORIGINATOR_H
#define BKSHIDEVENTAUTHENTICATIONORIGINATOR_H


#import <Foundation/Foundation.h>

#import "_BKSHIDEventAuthenticationKey.h"

@interface BKSHIDEventAuthenticationOriginator : NSObject {
    _BKSHIDEventAuthenticationKey *_key;
    CGFloat _keyLastAccessTime;
}




-(NSInteger)validateMessage:(id)arg0 ;
-(id)buildMessage:(id)arg0 ;


@end


#endif