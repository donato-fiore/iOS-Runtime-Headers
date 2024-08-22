// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTCATCHUPOPERATIONFORYOUFETCHINFO_H
#define NTCATCHUPOPERATIONFORYOUFETCHINFO_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NTCatchUpOperationForYouFetchInfo : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL attemptedCachedOnly; // ivar: _attemptedCachedOnly
@property (readonly, copy, nonatomic) NSDictionary *feedContextByFeedID; // ivar: _feedContextByFeedID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAttemptedCachedOnly:(BOOL)arg0 feedContextByFeedID:(id)arg1 ;


@end


#endif