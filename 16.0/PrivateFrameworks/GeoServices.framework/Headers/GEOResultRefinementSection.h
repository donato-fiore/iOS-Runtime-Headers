// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORESULTREFINEMENTSECTION_H
#define GEORESULTREFINEMENTSECTION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface GEOResultRefinementSection : NSObject

@property (nonatomic) NSInteger refinementsType; // ivar: _refinementsType
@property (copy, nonatomic) NSArray *resultRefinements; // ivar: _resultRefinements
@property (copy, nonatomic) NSString *sectionHeader; // ivar: _sectionHeader


-(id)convertToGEOPDResultRefinementSection;
-(id)initWithResultRefinementSection:(id)arg0 ;
-(id)initWithSectionHeader:(id)arg0 resultRefinements:(id)arg1 ;


@end


#endif