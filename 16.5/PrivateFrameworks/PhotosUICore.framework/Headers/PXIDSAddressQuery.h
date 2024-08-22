// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXIDSADDRESSQUERY_H
#define PXIDSADDRESSQUERY_H

@class NSMutableSet, NSMutableDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface PXIDSAddressQuery : NSObject {
    NSUInteger _destinationsCount;
    NSMutableSet *_mutableRemainingDestinations;
    NSMutableDictionary *_mutableStashedResults;
    NSUInteger _resultsCount;
}


@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, copy, nonatomic) NSSet *remainingDestinations;
@property (readonly, copy, nonatomic) id *resultHandler; // ivar: _resultHandler


-(id)initWithDestinations:(id)arg0 resultHandler:(id)arg1 ;
-(id)popStashedResults;
-(void)stashDestination:(id)arg0 withResult:(BOOL)arg1 ;


@end


#endif