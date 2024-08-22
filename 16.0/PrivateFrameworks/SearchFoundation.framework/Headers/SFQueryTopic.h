// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFQUERYTOPIC_H
#define SFQUERYTOPIC_H

@class NSString;
@protocol SFQueryTopic;


#import "SFTopic.h"

@interface SFQueryTopic : SFTopic <SFQueryTopic>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *query; // ivar: _query
@property (nonatomic) int queryType; // ivar: _queryType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(int)arg0 query:(id)arg1 ;
-(id)initWithType:(int)arg0 query:(id)arg1 identifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif