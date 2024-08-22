// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMAGECACHEENTRY_H
#define PHIMAGECACHEENTRY_H

@class NSError, NSMutableArray, NSDictionary, NSString;
@protocol PHRecyclableObject;

#import <Foundation/Foundation.h>


@interface PHImageCacheEntry : NSObject <PHRecyclableObject>

 {
    NSError *_error;
    *CGImage _imageRef;
    os_unfair_lock_s _lock;
    BOOL _isCancelled;
    NSMutableArray *_handlersWaitingOnResult;
}


@property (readonly, nonatomic) NSDictionary *additionalInfo; // ivar: _additionalInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int imageRequestIDForPopulatingCache; // ivar: _imageRequestIDForPopulatingCache
@property (readonly) Class superclass;


-(BOOL)hasImageRef;
-(BOOL)isCancelled;
-(id)init;
-(struct CGImage *)createImageRef;
-(void)_callWaiters:(id)arg0 wasCancelled:(BOOL)arg1 ;
-(void)addNotifyHandler:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)populateWithImageRef:(struct CGImage *)arg0 additionalInfo:(id)arg1 error:(id)arg2 executeBeforeNotifyingWaitersBlock:(id)arg3 ;
-(void)prepareForReuse;


@end


#endif