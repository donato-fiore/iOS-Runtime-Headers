// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASFASN1TOKEN_H
#define ASFASN1TOKEN_H

@class NSData;

#import <Foundation/Foundation.h>


@interface ASFAsn1Token : NSObject {
    unsigned char mClass;
    NSUInteger mIdentifier;
    NSData *mData;
}




-(id)description;


@end


#endif