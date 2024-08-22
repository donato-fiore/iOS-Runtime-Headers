// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASFASN1RECEIPTIAPTOKEN_H
#define ASFASN1RECEIPTIAPTOKEN_H


#import <Foundation/Foundation.h>

#import "ASFAsn1Token.h"

@interface ASFAsn1ReceiptIAPToken : NSObject {
    NSUInteger mType;
    NSUInteger mTypeVersion;
    ASFAsn1Token *mContentToken;
}




-(id)description;


@end


#endif