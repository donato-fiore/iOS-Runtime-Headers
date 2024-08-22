// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSENGAGEMENTENQUEUEREQUEST_H
#define AMSENGAGEMENTENQUEUEREQUEST_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"

@interface AMSEngagementEnqueueRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (retain, nonatomic) NSArray *destinations; // ivar: _destinations
@property (retain, nonatomic) NSArray *events; // ivar: _events
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (nonatomic) CGFloat timeout; // ivar: _timeout


+(BOOL)supportsSecureCoding;
+(id)archiveClasses;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif