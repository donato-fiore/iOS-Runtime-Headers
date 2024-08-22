// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFHIRREQUESTTASKENDSTATE_H
#define HKFHIRREQUESTTASKENDSTATE_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKFHIRRequestTaskEndState : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *eventLoggingDescription;
@property (readonly, nonatomic) BOOL hadError; // ivar: _hadError
@property (readonly, nonatomic) CGFloat requestDuration; // ivar: _requestDuration
@property (readonly, copy, nonatomic) NSURL *requestedURL; // ivar: _requestedURL
@property (readonly, nonatomic) NSInteger responseStatusCode; // ivar: _responseStatusCode


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asErrorEndState;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestedURL:(id)arg0 responseStatusCode:(NSInteger)arg1 requestDuration:(CGFloat)arg2 hadError:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif