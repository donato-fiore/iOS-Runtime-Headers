// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMFFRIENDSHIPREQUEST_H
#define FMFFRIENDSHIPREQUEST_H

@class NSDate, NSString, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FMFHandle.h"

@interface FMFFriendshipRequest : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) FMFHandle *fromHandle; // ivar: _fromHandle
@property (retain, nonatomic) NSString *groupId; // ivar: _groupId
@property (retain, nonatomic) NSString *requestId; // ivar: _requestId
@property (nonatomic) NSInteger requestType; // ivar: _requestType
@property (retain, nonatomic) NSSet *toHandles; // ivar: _toHandles


+(BOOL)supportsSecureCoding;
+(id)friendshipRequestToHandles:(id)arg0 fromHandle:(id)arg1 withType:(NSInteger)arg2 groupId:(id)arg3 withEndDate:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFromHandle:(id)arg0 toHandle:(id)arg1 ofType:(NSInteger)arg2 groupId:(id)arg3 endDate:(id)arg4 requestId:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif