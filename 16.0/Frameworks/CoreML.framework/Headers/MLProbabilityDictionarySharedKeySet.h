// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPROBABILITYDICTIONARYSHAREDKEYSET_H
#define MLPROBABILITYDICTIONARYSHAREDKEYSET_H

@class NSDictionary, NSArray, NSEnumerator;

#import <Foundation/Foundation.h>


@interface MLProbabilityDictionarySharedKeySet : NSObject {
    NSDictionary *_labelToIndex;
    NSArray *_labels;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSEnumerator *labelEnumerator;
@property (readonly, nonatomic) NSUInteger uniqueLabelCount;


-(NSUInteger)indexOfLabel:(id)arg0 ;
-(id)initWithLabels:(id)arg0 ;
-(id)labelAtIndex:(NSUInteger)arg0 ;


@end


#endif