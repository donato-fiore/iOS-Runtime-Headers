// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSUNIFIEDACCESSHANDLER_H
#define STSUNIFIEDACCESSHANDLER_H

@class NSData;

#import <Foundation/Foundation.h>

#import "STSHelperLibrary.h"
#import "STSNFCHandoverHandler.h"

@interface STSUnifiedAccessHandler : NSObject {
    STSHelperLibrary *_parent;
    NSData *_readerSharedSecret;
    NSData *_endpointIdentifier;
    STSNFCHandoverHandler *_nfcHandoverHandler;
}






@end


#endif