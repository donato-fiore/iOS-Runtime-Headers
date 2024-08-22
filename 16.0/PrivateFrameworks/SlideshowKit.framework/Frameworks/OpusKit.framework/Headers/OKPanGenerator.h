// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKPANGENERATOR_H
#define OKPANGENERATOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface OKPanGenerator : NSObject {
    NSArray *_panSteps;
}


@property (nonatomic) BOOL isReversed; // ivar: _isReversed
@property (nonatomic) BOOL loops; // ivar: _loops
@property (nonatomic) CGFloat mediaItemAspectRatio; // ivar: _mediaItemAspectRatio
@property (retain, nonatomic) NSArray *mediaItemRegionsOfInterest; // ivar: _mediaItemRegionsOfInterest
@property (nonatomic) NSUInteger panningType; // ivar: _panningType
@property (nonatomic) NSUInteger randomizer; // ivar: _randomizer
@property (nonatomic) CGRect referenceFrame; // ivar: _referenceFrame


-(id)_panStepWithRelativeFrame:(struct CGRect )arg0 forFittingMode:(NSUInteger)arg1 anchorPoint:(struct CGPoint )arg2 andExtraScale:(CGFloat)arg3 ;
-(id)_panStepWithRelativeFrame:(struct CGRect )arg0 forFittingMode:(NSUInteger)arg1 andAnchorPoint:(struct CGPoint )arg2 ;
-(id)init;
-(id)initWithAspectRatio:(CGFloat)arg0 ;
-(struct CGRect )_frameWithAspectRatio:(CGFloat)arg0 forFittingMode:(NSUInteger)arg1 andAnchorPoint:(struct CGPoint )arg2 ;
-(struct CGRect )_fullROI;
-(void)_updatePanSteps;
-(void)dealloc;
-(void)enumeratePanStepsWithBlock:(id)arg0 ;


@end


#endif