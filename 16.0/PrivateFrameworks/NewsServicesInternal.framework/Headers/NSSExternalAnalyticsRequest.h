// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSEXTERNALANALYTICSREQUEST_H
#define NSSEXTERNALANALYTICSREQUEST_H

@class NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSSExternalAnalyticsRequestMetadata.h"

@interface NSSExternalAnalyticsRequest : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSSExternalAnalyticsRequestMetadata *metadata; // ivar: _metadata


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 metadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif