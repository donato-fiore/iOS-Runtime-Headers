// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPSECURELOCATIONSSTEWIEPUBLISHRESULT_H
#define SPSECURELOCATIONSSTEWIEPUBLISHRESULT_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPSecureLocationsStewiePublishResult : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDate *lastPublished; // ivar: _lastPublished
@property (nonatomic) CGFloat nextAllowedPublish; // ivar: _nextAllowedPublish


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif