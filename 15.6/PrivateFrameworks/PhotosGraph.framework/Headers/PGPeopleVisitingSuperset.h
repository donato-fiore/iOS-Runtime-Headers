// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPEOPLEVISITINGSUPERSET_H
#define PGPEOPLEVISITINGSUPERSET_H

@class NSCountedSet, NSDateInterval, NSArray;

#import <Foundation/Foundation.h>

#import "PGPeopleVisitingVisit.h"
#import "PGGraphAddressNode.h"

@interface PGPeopleVisitingSuperset : NSObject {
    NSCountedSet *_numberOfMomentsByDistance;
    PGPeopleVisitingVisit *_currentVisit;
}


@property (readonly) PGGraphAddressNode *addressNode; // ivar: _addressNode
@property (readonly) CLLocationCoordinate2D coordinates; // ivar: _coordinates
@property (readonly) NSDateInterval *localDateInterval; // ivar: _localDateInterval
@property (readonly) CGFloat lowerCloseRatio;
@property (readonly) CGFloat lowerFarRatio;
@property (readonly) CGFloat lowerVeryFarRatio;
@property (readonly) NSUInteger numberOfMatchingMoments; // ivar: _numberOfMatchingMoments
@property (readonly) NSUInteger totalNumberOfMoments; // ivar: _totalNumberOfMoments
@property (readonly) CGFloat upperCloseRatio;
@property (readonly) CGFloat upperFarRatio;
@property (readonly) CGFloat upperVeryFarRatio;
@property (readonly) NSArray *visits; // ivar: _visits


-(id)description;
-(id)initWithAddressNode:(id)arg0 localDateInterval:(id)arg1 ;
-(void)closeVisitFindingSession;
-(void)registerMomentNode:(id)arg0 distance:(NSUInteger)arg1 ;
-(void)resetVisitFindingSession;


@end


#endif