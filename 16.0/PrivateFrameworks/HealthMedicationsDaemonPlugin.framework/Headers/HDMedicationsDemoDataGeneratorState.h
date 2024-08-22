// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONSDEMODATAGENERATORSTATE_H
#define HDMEDICATIONSDEMODATAGENERATORSTATE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface HDMedicationsDemoDataGeneratorState : NSObject

@property (nonatomic) BOOL didSaveIntialData; // ivar: _didSaveIntialData
@property (nonatomic) BOOL didSetupOntologyData; // ivar: _didSetupOntologyData
@property (nonatomic) BOOL hasScheduledMedications; // ivar: _hasScheduledMedications
@property (retain, nonatomic) NSDate *latestLogDate; // ivar: _latestLogDate
@property (retain, nonatomic) NSDate *latestTakenLogDate; // ivar: _latestTakenLogDate


-(id)dictionary;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif