// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUTONEMEISTERPARAMETERIMPORTER_H
#define AUTONEMEISTERPARAMETERIMPORTER_H


#import <Foundation/Foundation.h>


@interface AUToneMeisterParameterImporter : NSObject

@property unsigned int numberOfChannels; // ivar: _numberOfChannels
@property *void toneMeister; // ivar: _toneMeister


-(BOOL)bandShelveFrequenciesAreValid:(id)arg0 message:(*id)arg1 ;
-(BOOL)dictionaryIsValid:(id)arg0 withOptions:(int)arg1 message:(*id)arg2 ;
-(BOOL)dictionaryWouldChangeChannelMuteParameter:(id)arg0 message:(id)arg1 ;
-(BOOL)dictionaryWouldChangeChannelPhaseFlipParameter:(id)arg0 message:(id)arg1 ;
-(BOOL)dictionaryWouldChangeInputGainParameter:(id)arg0 ;
-(BOOL)filterChannelAllocationIsValid:(id)arg0 message:(*id)arg1 ;
-(BOOL)filterFrequencyIsValid:(id)arg0 message:(*id)arg1 ;
-(BOOL)filterGainIsValid:(id)arg0 message:(*id)arg1 ;
-(BOOL)filterOrderIsValid:(id)arg0 message:(*id)arg1 ;
-(BOOL)filterQualityIsValid:(id)arg0 message:(*id)arg1 ;
-(BOOL)filterTypeIsValid:(id)arg0 message:(*id)arg1 ;
-(BOOL)import:(id)arg0 withOptions:(int)arg1 andMessage:(*id)arg2 ;
-(BOOL)lowHighShelveFrequenciesAreValid:(id)arg0 message:(*id)arg1 ;
-(BOOL)numberOfChannelsForGlobalParametersIsValid:(id)arg0 message:(*id)arg1 ;
-(BOOL)parametricFilterFrequencyIsValid:(id)arg0 message:(*id)arg1 ;
-(BOOL)setValue:(float)arg0 forAutomationParameter:(unsigned int)arg1 ofFilter:(unsigned int)arg2 ;
-(id)availableFilterGroup;
-(id)availableFilters;
-(id)filterTypeString:(unsigned int)arg0 ;
-(id)filterTypeStrings;
-(id)initWithToneMeister:(*void)arg0 andNumberOfChannels:(unsigned int)arg1 ;
-(void)importChannelAllocationFromDictionary:(id)arg0 andAssignToFilter:(unsigned int)arg1 ;
-(void)importChannelMuteParameterFromDictionary:(id)arg0 ;
-(void)importChannelPhaseFlipParameterFromDictionary:(id)arg0 ;
-(void)importFilterAutomationFromDictionary:(id)arg0 andAssignToFilter:(unsigned int)arg1 ;
-(void)importFilterFrequencyFromDictionary:(id)arg0 andAssignToFilter:(unsigned int)arg1 ;
-(void)importFilterGainFromDictionary:(id)arg0 andAssignToFilter:(unsigned int)arg1 ;
-(void)importFilterOrderFromDictionary:(id)arg0 andAssignToFilter:(unsigned int)arg1 ;
-(void)importFilterQualityFromDictionary:(id)arg0 andAssignToFilter:(unsigned int)arg1 ;
-(void)importFilterStateFromDictionary:(id)arg0 andAssignToFilter:(unsigned int)arg1 ;
-(void)importFilterTypeFromDictionary:(id)arg0 andAssignToFilter:(unsigned int)arg1 ;
-(void)importInputGainParameterFromDictionary:(id)arg0 ;
-(void)importPhaseEqualizerFromDictionary:(id)arg0 andAssignToFilter:(unsigned int)arg1 ;
-(void)setValue:(float)arg0 forParameter:(unsigned int)arg1 ;
-(void)setValue:(float)arg0 forParameter:(unsigned int)arg1 ofFilter:(unsigned int)arg2 ;


@end


#endif