// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPDEFAULTPOSITIONHYPERREGIONCOMPOSER_H
#define SBPIPDEFAULTPOSITIONHYPERREGIONCOMPOSER_H

@class NSDictionary, NSString;
@protocol SBPIPPositionHyperregionComposing, SBPIPPositionHyperregionComposerDelegate;

#import <Foundation/Foundation.h>

#import "SBPIPPositionHyperregionLibrary.h"

@interface SBPIPDefaultPositionHyperregionComposer : NSObject <SBPIPPositionHyperregionComposing>

 {
    BOOL _isPad;
    SBPIPPositionHyperregionLibrary *_regionsLibrary;
    SBPIPPositionInteractionStateContext _lastInteractionStateContext;
    NSDictionary *_lastRegionsMap;
    NSDictionary *_lastResolvedRegionsMap;
    SBPIPPositionGeometryContext _lastGeometryContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBPIPPositionHyperregionComposerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)positionRegionsForRegions:(id)arg0 geometry:(struct SBPIPPositionGeometryContext )arg1 interaction:(struct SBPIPPositionInteractionStateContext )arg2 ;
-(id)regionWithType:(NSInteger)arg0 geometry:(struct SBPIPPositionGeometryContext )arg1 ;
-(void)_addRegionWithType:(NSInteger)arg0 geometry:(struct SBPIPPositionGeometryContext )arg1 toMap:(id)arg2 ;
-(void)_pruneRegionsMap:(id)arg0 geometry:(struct SBPIPPositionGeometryContext )arg1 interaction:(struct SBPIPPositionInteractionStateContext )arg2 ;
-(void)invalidate;


@end


#endif