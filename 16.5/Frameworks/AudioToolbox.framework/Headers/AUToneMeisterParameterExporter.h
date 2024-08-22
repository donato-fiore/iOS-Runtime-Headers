// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUTONEMEISTERPARAMETEREXPORTER_H
#define AUTONEMEISTERPARAMETEREXPORTER_H


#import <Foundation/Foundation.h>


@interface AUToneMeisterParameterExporter : NSObject

@property *void toneMeister; // ivar: _toneMeister


-(id)exportAutomationOfFilter:(unsigned int)arg0 ;
-(id)exportChannelAllocationOfFilter:(unsigned int)arg0 ;
-(id)exportChannelMuteAndPhaseFlipParameters;
-(id)exportFrequencyOfFilter:(unsigned int)arg0 ;
-(id)exportGainOfFilter:(unsigned int)arg0 ;
-(id)exportInputGain;
-(id)exportOrderOfFilter:(unsigned int)arg0 ;
-(id)exportParametersOfAllFilters:(BOOL)arg0 ;
-(id)exportParametersOfFilter:(unsigned int)arg0 ;
-(id)exportPhaseOfFilter:(unsigned int)arg0 ;
-(id)exportQualtiyOfFilter:(unsigned int)arg0 ;
-(id)exportStateOfFilter:(unsigned int)arg0 ;
-(id)exportTimeStamp;
-(id)exportTypeOfFilter:(unsigned int)arg0 ;
-(id)exportWithOptions:(int)arg0 ;
-(id)initWithToneMeister:(*void)arg0 ;


@end


#endif