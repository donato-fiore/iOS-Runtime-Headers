// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICAUTHORHIGHLIGHTANIMATIONATTRIBUTE_H
#define ICAUTHORHIGHLIGHTANIMATIONATTRIBUTE_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICAuthorHighlightAnimationAttribute : NSObject <NSCopying>



@property (nonatomic, getter=isAboveExistingHighlights) BOOL aboveExistingHighlights; // ivar: _aboveExistingHighlights
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat fromValue; // ivar: _fromValue
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion; // ivar: _removedOnCompletion
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) CGFloat toValue; // ivar: _toValue


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithStartDate:(id)arg0 ;


@end


#endif