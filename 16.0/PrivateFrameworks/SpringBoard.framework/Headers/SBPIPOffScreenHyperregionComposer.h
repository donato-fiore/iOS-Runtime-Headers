// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPOFFSCREENHYPERREGIONCOMPOSER_H
#define SBPIPOFFSCREENHYPERREGIONCOMPOSER_H

@class FBSDisplayConfiguration, NSString;
@protocol SBPIPPositionHyperregionComposing, SBPIPOffScreenContextProviding, SBPIPPositionHyperregionComposerDelegate;

#import <Foundation/Foundation.h>

#import "SBPIPDefaultPositionHyperregionComposer.h"

@interface SBPIPOffScreenHyperregionComposer : NSObject <SBPIPPositionHyperregionComposing>

 {
    SBPIPDefaultPositionHyperregionComposer *_wrappedComposer;
    FBSDisplayConfiguration *_currentDisplayConfiguration;
    id<SBPIPOffScreenContextProviding> *_contextProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBPIPPositionHyperregionComposerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect frame;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCurrentDisplayConfiguration:(id)arg0 offScreenContextProvider:(id)arg1 ;
-(id)initWithCurrentWindowScene:(id)arg0 neighboringWindowScene:(id)arg1 ;
-(id)positionRegionsForRegions:(id)arg0 geometry:(struct SBPIPPositionGeometryContext )arg1 interaction:(struct SBPIPPositionInteractionStateContext )arg2 ;
-(id)regionWithType:(NSInteger)arg0 geometry:(struct SBPIPPositionGeometryContext )arg1 ;
-(void)_mergeRegions:(id)arg0 ofType:(id)arg1 into:(id)arg2 ;
-(void)invalidate;


@end


#endif