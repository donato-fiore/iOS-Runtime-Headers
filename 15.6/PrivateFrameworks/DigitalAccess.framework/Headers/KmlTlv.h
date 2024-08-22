// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KMLTLV_H
#define KMLTLV_H

@class NSData;

#import <Foundation/Foundation.h>


@interface KmlTlv : NSObject {
    unsigned short _tag;
    NSData *_value;
}




-(id)description;


@end


#endif