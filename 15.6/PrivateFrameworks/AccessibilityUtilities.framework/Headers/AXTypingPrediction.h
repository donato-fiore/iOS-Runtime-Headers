// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXTYPINGPREDICTION_H
#define AXTYPINGPREDICTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AXTypingPrediction : NSObject

@property (copy, nonatomic) NSString *fullWord; // ivar: _fullWord
@property (copy, nonatomic) NSString *prefix; // ivar: _prefix
@property (nonatomic) CGFloat probability; // ivar: _probability
@property (nonatomic) _NSRange rangeToReplace; // ivar: _rangeToReplace
@property (copy, nonatomic) NSString *textToInsert; // ivar: _textToInsert


-(id)description;


@end


#endif