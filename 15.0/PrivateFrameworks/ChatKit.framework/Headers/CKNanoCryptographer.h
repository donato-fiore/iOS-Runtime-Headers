// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKNANOCRYPTOGRAPHER_H
#define CKNANOCRYPTOGRAPHER_H

@class NSData, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKNanoCryptographer : NSObject {
    NSData *_deviceSalt;
}


@property (copy, nonatomic) NSString *cachedRecipientDigest; // ivar: _cachedRecipientDigest
@property (copy, nonatomic) NSString *cachedRecipientName; // ivar: _cachedRecipientName
@property (readonly, nonatomic) NSData *deviceSalt;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue


+(id)sharedCryptographer;
-(id)init;
-(id)stringDigestForName:(id)arg0 ;
-(void)prewarmDeviceSalt;


@end


#endif