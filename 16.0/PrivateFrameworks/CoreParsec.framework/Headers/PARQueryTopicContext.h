// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PARQUERYTOPICCONTEXT_H
#define PARQUERYTOPICCONTEXT_H

@class NSString, SFQueryTopic;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PARQueryTopicContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *contextId; // ivar: _contextId
@property (readonly, nonatomic) NSInteger index;
@property (retain, nonatomic) SFQueryTopic *topic; // ivar: _topic


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTopic:(id)arg0 index:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif