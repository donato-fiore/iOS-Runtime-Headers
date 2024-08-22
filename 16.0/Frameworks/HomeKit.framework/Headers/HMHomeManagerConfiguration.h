// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMHOMEMANAGERCONFIGURATION_H
#define HMHOMEMANAGERCONFIGURATION_H

@class NSURL, NSOperationQueue, HMFLocationAuthorization;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HMHomeManagerConfiguration : NSObject <NSCopying, NSMutableCopying>



@property (readonly, getter=isAdaptive) BOOL adaptive; // ivar: _adaptive
@property (nonatomic) NSUInteger cachePolicy; // ivar: _cachePolicy
@property (readonly) NSURL *cacheURL; // ivar: _cacheURL
@property (readonly) BOOL canUseCache;
@property (readonly) NSOperationQueue *delegateQueue; // ivar: _delegateQueue
@property (readonly, getter=isDiscretionary) BOOL discretionary; // ivar: _discretionary
@property (readonly) HMFLocationAuthorization *locationAuthorization; // ivar: _locationAuthorization
@property (readonly) NSUInteger options; // ivar: _options
@property (nonatomic) BOOL shouldConnect; // ivar: _shouldConnect


+(id)defaultConfiguration;
+(id)defaultPrivateConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 cachePolicy:(NSUInteger)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif