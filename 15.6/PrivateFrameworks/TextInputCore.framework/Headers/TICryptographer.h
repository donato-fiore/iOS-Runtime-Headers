// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TICRYPTOGRAPHER_H
#define TICRYPTOGRAPHER_H

@class NSData, NSString;
@protocol TICryptographing, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TICryptographer : NSObject <TICryptographing>

 {
    NSData *_deviceSalt;
}


@property (copy, nonatomic) NSString *cachedRecipientDigest; // ivar: _cachedRecipientDigest
@property (copy, nonatomic) NSString *cachedRecipientName; // ivar: _cachedRecipientName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *deviceSalt;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedCryptographer;
+(id)singletonInstance;
+(void)setSharedCryptographer:(id)arg0 ;
-(id)init;
-(id)stringDigestForName:(id)arg0 ;


@end


#endif