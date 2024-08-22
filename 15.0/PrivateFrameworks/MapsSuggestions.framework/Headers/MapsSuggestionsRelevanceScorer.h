// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSRELEVANCESCORER_H
#define MAPSSUGGESTIONSRELEVANCESCORER_H

@class NSMutableArray, NSDate;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsRelevanceScorer : NSObject {
    NSMutableArray *_scorers;
    NSDate *_scorersUpdatedAt;
}




-(id)confidenceForContacts:(id)arg0 addresses:(id)arg1 ;
-(id)confidenceForMapItems:(id)arg0 ;
-(id)init;
-(void)addScorer:(id)arg0 ;
-(void)preLoadAllScorers;


@end


#endif