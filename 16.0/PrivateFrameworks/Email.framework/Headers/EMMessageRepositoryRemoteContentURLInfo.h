// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMMESSAGEREPOSITORYREMOTECONTENTURLINFO_H
#define EMMESSAGEREPOSITORYREMOTECONTENTURLINFO_H

@class NSDate, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EMMessageRepositoryRemoteContentURLInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *lastRequested; // ivar: _lastRequested
@property (readonly, nonatomic) NSDate *lastSeen; // ivar: _lastSeen
@property (readonly, nonatomic) NSUInteger requestCount; // ivar: _requestCount
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 requestCount:(NSUInteger)arg1 lastSeen:(id)arg2 lastRequested:(id)arg3 ;
-(void)_commonInitWithURL:(id)arg0 requestCount:(NSUInteger)arg1 lastSeen:(id)arg2 lastRequested:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif