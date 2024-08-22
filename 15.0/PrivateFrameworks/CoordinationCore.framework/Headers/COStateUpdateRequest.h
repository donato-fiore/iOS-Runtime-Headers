// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COSTATEUPDATEREQUEST_H
#define COSTATEUPDATEREQUEST_H

@class NSDictionary;
@protocol NSCopying;


#import "COMeshRequest.h"

@interface COStateUpdateRequest : COMeshRequest <NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *removals; // ivar: _removals
@property (readonly, copy, nonatomic) NSDictionary *updates; // ivar: _updates


+(BOOL)supportsSecureCoding;
+(id)acceptableResponses;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUpdates:(id)arg0 removals:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif