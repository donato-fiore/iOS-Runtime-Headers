// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFENTITYTOPIC_H
#define SFENTITYTOPIC_H

@class NSString;
@protocol SFEntityTopic;


#import "SFQueryTopic.h"

@interface SFEntityTopic : SFQueryTopic <SFEntityTopic>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, nonatomic) int queryType;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(int)arg0 identifier:(id)arg1 ;
-(id)initWithType:(int)arg0 query:(id)arg1 identifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif