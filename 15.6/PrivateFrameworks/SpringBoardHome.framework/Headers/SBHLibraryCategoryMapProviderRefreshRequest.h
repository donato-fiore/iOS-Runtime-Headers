// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHLIBRARYCATEGORYMAPPROVIDERREFRESHREQUEST_H
#define SBHLIBRARYCATEGORYMAPPROVIDERREFRESHREQUEST_H

@class NSMutableDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBHLibraryCategoryMapProviderRefreshRequest : NSObject <NSCopying>

 {
    NSMutableDictionary *_failures;
}


@property (readonly, nonatomic) NSUInteger failureCount;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) NSString *requestReason; // ivar: _requestReason
@property (copy, nonatomic) NSString *senderDescription; // ivar: _senderDescription


-(BOOL)hasFailedSeveralTimes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)failureForSessionIdentifier:(NSInteger)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 reason:(id)arg1 ;
-(void)accumulateFailure:(id)arg0 forSession:(NSUInteger)arg1 ;


@end


#endif