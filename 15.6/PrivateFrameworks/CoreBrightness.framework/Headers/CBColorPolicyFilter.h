// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBCOLORPOLICYFILTER_H
#define CBCOLORPOLICYFILTER_H



#import "CBFilter.h"
#import "CBCEModule.h"
#import "CBStack.h"
#import "CBHIDEvent.h"

@interface CBColorPolicyFilter : CBFilter {
    float _mitigationThrE;
    float _mitigationThrL;
    int _mitigationThrSize;
    float _ceMitigationThrE;
    float _ceMitigationThrL;
    int _ceMitigationThrSize;
    *float _mitigatedStrengthLUT;
    CBCEModule *_ceModule;
    BOOL _ceEnabled;
    CBStack *_alsStack;
    NSUInteger _stackLength;
    NSUInteger _stackCurrentCount;
    NSUInteger _consecutiveNonMitgatedCount;
    BOOL _mitigationUsedYet;
}


@property (readonly, nonatomic) CBHIDEvent *filteredALS; // ivar: _filteredALS
@property float filteredStrength; // ivar: _filteredStrength
@property BOOL isColorMitigationTriggered; // ivar: _isColorMitigationTriggered


-(BOOL)sampleIsFromCERegion:(id)arg0 ;
-(BOOL)sampleIsFromMitigatedRegion:(id)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(BOOL)shouldMitigateForSample:(id)arg0 withLuxThr:(*float)arg1 NitsThr:(*float)arg2 andSize:(int)arg3 ;
-(float)biLinearInterpBetweenIndices:(char *)arg0 forPoint1:(float)arg1 andPoint2:(float)arg2 ;
-(float)computeBaselineStrengthForLux:(float)arg0 andNits:(float)arg1 ;
-(float)interpolateBetweenX1:(float)arg0 Y1:(float)arg1 X2:(float)arg2 Y2:(float)arg3 X:(float)arg4 ;
-(id)filterEvent:(id)arg0 ;
-(id)handleALSEvent:(id)arg0 ;
-(id)initWithID:(unsigned int)arg0 ;
-(void)dealloc;
-(void)initializeMitigationsForDevice:(unsigned int)arg0 ;
-(void)resetFilter;
-(void)setModuleObject:(id)arg0 ;


@end


#endif