// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DRTOPICINTERESTSUMMARY_H
#define _DRTOPICINTERESTSUMMARY_H

@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _DRTopicInterestSummary : NSObject <NSCoding, NSCopying>



@property NSUInteger topicPresentationsCount; // ivar: _topicPresentationsCount
@property NSUInteger topicSelectionsCount; // ivar: _topicSelectionsCount


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPresentationsCount:(NSUInteger)arg0 selectionsCount:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif