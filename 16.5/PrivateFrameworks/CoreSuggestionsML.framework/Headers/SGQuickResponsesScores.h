// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGQUICKRESPONSESSCORES_H
#define SGQUICKRESPONSESSCORES_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesScores : NSObject

@property (readonly, nonatomic) NSArray *modelScores; // ivar: _modelScores
@property (readonly, nonatomic) NSArray *normalizedModelScores; // ivar: _normalizedModelScores


+(id)quickResponsesScoresWithModelScores:(id)arg0 normalizedModelScores:(id)arg1 ;
-(id)initWithModelScores:(id)arg0 normalizedModelScores:(id)arg1 ;


@end


#endif