// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTCONTENTKEYRESPONSE_H
#define MTCONTENTKEYRESPONSE_H

@class NSError, NSData, NSDate;

#import <Foundation/Foundation.h>

#import "MTContentKeyRequest.h"

@interface MTContentKeyResponse : NSObject {
    ? renewalDate;
    ? error;
    ? keyData;
}


@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSData *keyData;
@property (nonatomic, readonly) NSDate *renewalDate;
@property (nonatomic, readonly) MTContentKeyRequest *request; // ivar: request


-(id)init;
-(id)initWithRequest:(id)arg0 error:(id)arg1 ;
-(id)initWithRequest:(id)arg0 keyData:(id)arg1 renewalDate:(id)arg2 error:(id)arg3 ;


@end


#endif