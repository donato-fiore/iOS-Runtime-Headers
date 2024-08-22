// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFSTORYAUTOEDITFREQUENCYTABLE_H
#define PFSTORYAUTOEDITFREQUENCYTABLE_H

@class NSArray, NSMutableArray, NSNumber;
@protocol PFRandomNumberGenerator;

#import <Foundation/Foundation.h>


@interface PFStoryAutoEditFrequencyTable : NSObject {
    NSArray *_baseTable;
    NSMutableArray *_workingElements;
    id<PFRandomNumberGenerator> *_randomNumberGenerator;
    NSNumber *_fallbackValue;
}




-(BOOL)hasValue:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithValueCounts:(id)arg0 randomNumberGenerator:(id)arg1 fallbackValue:(id)arg2 ;
-(id)nextValue;
-(id)nextValuePassingTest:(id)arg0 ;


@end


#endif