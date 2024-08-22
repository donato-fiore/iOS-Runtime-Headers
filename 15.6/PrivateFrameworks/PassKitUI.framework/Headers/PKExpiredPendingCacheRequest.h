// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKEXPIREDPENDINGCACHEREQUEST_H
#define PKEXPIREDPENDINGCACHEREQUEST_H

@class NSString, NSArray, PKPass;

#import <Foundation/Foundation.h>


@interface PKExpiredPendingCacheRequest : NSObject

@property (retain, nonatomic) NSString *cacheKey; // ivar: _cacheKey
@property (retain, nonatomic) NSArray *completionHandlers; // ivar: _completionHandlers
@property (nonatomic) BOOL fullPass; // ivar: _fullPass
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) PKPass *pass; // ivar: _pass
@property (nonatomic) NSInteger priority; // ivar: _priority


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif