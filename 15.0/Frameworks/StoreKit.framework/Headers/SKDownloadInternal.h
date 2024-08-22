// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKDOWNLOADINTERNAL_H
#define SKDOWNLOADINTERNAL_H

@class NSNumber, NSString, NSError, NSURL;

#import <Foundation/Foundation.h>

#import "SKPaymentTransaction.h"

@interface SKDownloadInternal : NSObject {
    NSNumber *_downloadID;
    NSString *_productID;
    NSInteger _state;
    float _progress;
    NSError *_error;
    NSURL *_contentURL;
    CGFloat _timeRemaining;
    NSNumber *_contentLength;
    NSString *_contentVersion;
    SKPaymentTransaction *_transaction;
}






@end


#endif