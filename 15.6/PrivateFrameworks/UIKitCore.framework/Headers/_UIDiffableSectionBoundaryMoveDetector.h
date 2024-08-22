// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDIFFABLESECTIONBOUNDARYMOVEDETECTOR_H
#define _UIDIFFABLESECTIONBOUNDARYMOVEDETECTOR_H

@class NSSet;
@protocol _UIIdentifierDiffer, _UIDiffableDataSourceState;

#import <Foundation/Foundation.h>


@interface _UIDiffableSectionBoundaryMoveDetector : NSObject {
    id<_UIIdentifierDiffer> *_differ;
    id<_UIDiffableDataSourceState> *_beforeState;
    id<_UIDiffableDataSourceState> *_afterState;
}


@property (readonly, nonatomic) BOOL didShortCircuit; // ivar: _didShortCircuit
@property (readonly, nonatomic) NSSet *movePairs; // ivar: _movePairs


-(id)_computeMovePairsFoundation;
-(id)_computeMovePairsSTL;
-(id)initWithItemDiffer:(id)arg0 beforeDataSourceState:(id)arg1 afterDataSourceState:(id)arg2 ;


@end


#endif