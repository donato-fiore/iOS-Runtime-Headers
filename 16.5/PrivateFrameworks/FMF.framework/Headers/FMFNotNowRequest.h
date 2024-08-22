// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMFNOTNOWREQUEST_H
#define FMFNOTNOWREQUEST_H

@class NSString, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FMFHandle.h"

@interface FMFNotNowRequest : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) FMFHandle *fromHandle; // ivar: _fromHandle
@property (retain, nonatomic) NSString *requestId; // ivar: _requestId
@property (retain, nonatomic) NSSet *toHandles; // ivar: _toHandles


+(BOOL)supportsSecureCoding;
+(id)notNowRequestToHandles:(id)arg0 fromHandle:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFromHandle:(id)arg0 toHandle:(id)arg1 requestId:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif