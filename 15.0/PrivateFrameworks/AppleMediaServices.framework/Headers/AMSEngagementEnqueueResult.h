// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSENGAGEMENTENQUEUERESULT_H
#define AMSENGAGEMENTENQUEUERESULT_H

@class NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSEngagementRequest.h"

@interface AMSEngagementEnqueueResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) NSDictionary *data; // ivar: _data
@property (retain, nonatomic) AMSEngagementRequest *request; // ivar: _request


+(BOOL)supportsSecureCoding;
+(id)archiveClasses;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif