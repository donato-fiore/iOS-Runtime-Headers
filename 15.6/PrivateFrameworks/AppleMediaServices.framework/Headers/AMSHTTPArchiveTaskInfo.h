// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSHTTPARCHIVETASKINFO_H
#define AMSHTTPARCHIVETASKINFO_H

@class NSData, NSURLSessionTaskMetrics;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSHTTPArchiveTaskInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *HTTPBody; // ivar: _HTTPBody
@property (readonly, nonatomic) NSURLSessionTaskMetrics *metrics; // ivar: _metrics
@property (readonly, nonatomic) NSData *responseData; // ivar: _responseData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURLTaskInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif