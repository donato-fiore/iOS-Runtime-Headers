// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APSDNSREQUEST_H
#define APSDNSREQUEST_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface APSDNSRequest : NSObject <NSSecureCoding>

 {
    NSInteger _flags;
}


@property (retain, nonatomic) NSString *environment; // ivar: _environment
@property (readonly, copy, nonatomic) NSString *hostname; // ivar: _hostname
@property (retain, nonatomic) NSDate *requestStartTime; // ivar: _requestStartTime
@property (readonly, copy) id *responseBlock; // ivar: _responseBlock
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHostname:(id)arg0 timeoutInSeconds:(CGFloat)arg1 requestFlags:(NSInteger)arg2 responseBlock:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif