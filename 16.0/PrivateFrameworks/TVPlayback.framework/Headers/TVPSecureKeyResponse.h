// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVPSECUREKEYRESPONSE_H
#define TVPSECUREKEYRESPONSE_H

@class NSData, NSDate;

#import <Foundation/Foundation.h>

#import "TVPSecureKeyRequest.h"

@interface TVPSecureKeyResponse : NSObject

@property (retain, nonatomic) NSData *keyData; // ivar: _keyData
@property (retain, nonatomic) NSDate *renewalDate; // ivar: _renewalDate
@property (retain, nonatomic) TVPSecureKeyRequest *request; // ivar: _request




@end


#endif