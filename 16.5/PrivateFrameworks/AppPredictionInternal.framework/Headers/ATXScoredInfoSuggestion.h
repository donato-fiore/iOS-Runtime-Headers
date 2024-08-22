// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSCOREDINFOSUGGESTION_H
#define ATXSCOREDINFOSUGGESTION_H

@class ATXInfoSuggestion;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ATXInformationFeatureSet.h"

@interface ATXScoredInfoSuggestion : NSObject <NSCopying>



@property (readonly, nonatomic) ATXInformationFeatureSet *featureSet; // ivar: _featureSet
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) ATXInfoSuggestion *suggestion; // ivar: _suggestion


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithSuggestion:(id)arg0 featureSet:(id)arg1 score:(CGFloat)arg2 ;


@end


#endif