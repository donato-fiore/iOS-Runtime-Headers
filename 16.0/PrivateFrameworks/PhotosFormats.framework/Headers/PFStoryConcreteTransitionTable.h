// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFSTORYCONCRETETRANSITIONTABLE_H
#define PFSTORYCONCRETETRANSITIONTABLE_H

@class NSDictionary, NSArray;
@protocol PFStoryTransitionTable;

#import <Foundation/Foundation.h>


@interface PFStoryConcreteTransitionTable : NSObject <PFStoryTransitionTable>

 {
    NSDictionary *_transitionsByColorGrade;
    NSArray *_defaultFrequencies;
}




-(id)debugDescription;
-(id)initWithTransitionsByColorGrade:(id)arg0 defaultFrequencies:(id)arg1 ;
-(id)transitionsForColorGrade:(id)arg0 songPace:(NSInteger)arg1 ;


@end


#endif