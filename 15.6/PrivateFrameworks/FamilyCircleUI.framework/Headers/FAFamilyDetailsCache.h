// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAFAMILYDETAILSCACHE_H
#define FAFAMILYDETAILSCACHE_H


#import <Foundation/Foundation.h>


@interface FAFamilyDetailsCache : NSObject {
    NSUInteger _pendingInviteCount;
    BOOL _isValid;
    BOOL _isValidating;
}


@property (readonly, nonatomic) NSUInteger pendingInviteCount;


+(id)sharedCache;
-(void)_fetchPendingInviteCount;
-(void)invalidate;


@end


#endif