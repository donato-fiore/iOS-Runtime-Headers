// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSHAREBACKSUGGESTERRESULT_H
#define PGSHAREBACKSUGGESTERRESULT_H

@class NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface PGShareBackSuggesterResult : NSObject

@property (readonly, nonatomic) NSSet *momentNodes; // ivar: _momentNodes
@property (readonly, nonatomic) unsigned short processingValue; // ivar: _processingValue
@property (readonly, nonatomic) NSArray *suggesterInputs; // ivar: _suggesterInputs


+(id)momentNodesForSuggesterResults:(id)arg0 ;
-(id)description;
-(id)initWithInputs:(id)arg0 processingValue:(unsigned short)arg1 momentNodes:(id)arg2 ;


@end


#endif