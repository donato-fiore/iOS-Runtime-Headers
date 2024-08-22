// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICAUTHORHIGHLIGHTANIMATION_H
#define ICAUTHORHIGHLIGHTANIMATION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface ICAuthorHighlightAnimation : NSObject

@property (nonatomic, getter=isAboveExistingHighlights) BOOL aboveExistingHighlights; // ivar: _aboveExistingHighlights
@property (copy, nonatomic) NSNumber *duration; // ivar: _duration
@property (copy, nonatomic) NSNumber *fromValue; // ivar: _fromValue
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion; // ivar: _removedOnCompletion
@property (copy, nonatomic) NSNumber *toValue; // ivar: _toValue


-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif