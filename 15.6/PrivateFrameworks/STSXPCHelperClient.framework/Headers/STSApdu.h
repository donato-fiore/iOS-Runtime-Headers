// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSAPDU_H
#define STSAPDU_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface STSApdu : NSObject {
    unsigned char _cls;
    unsigned char _instruction;
    unsigned char _p1;
    unsigned char _p2;
    NSData *_payload;
    NSNumber *_le;
}






@end


#endif