// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDATAMETADATAAUDIOGRAMFREQUENCIESSECTION_H
#define HKDATAMETADATAAUDIOGRAMFREQUENCIESSECTION_H



#import "HKDataMetadataSimpleSection.h"

@interface HKDataMetadataAudiogramFrequenciesSection : HKDataMetadataSimpleSection



-(id)initWithSample:(id)arg0 leftEar:(BOOL)arg1 unitController:(id)arg2 ;
-(void)_addCellsFromAudiogramSample:(id)arg0 forLeftEar:(BOOL)arg1 unitController:(id)arg2 ;


@end


#endif