// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSSUGGESTERCONFIGURATION_H
#define _PSSUGGESTERCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "_PSEnsembleModel.h"

@interface _PSSuggesterConfiguration : NSObject

@property (nonatomic) NSInteger maximumNumberOfSuggestions; // ivar: _maximumNumberOfSuggestions
@property (retain, nonatomic) _PSEnsembleModel *suggestionModel; // ivar: _suggestionModel


+(id)defaultConfiguration;
-(id)description;


@end


#endif