// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTKPTRIGGERPMI_H
#define DTKPTRIGGERPMI_H

@class NSString;


#import "DTKPTrigger.h"

@interface DTKPTriggerPMI : DTKPTrigger

@property (readonly, retain, nonatomic) NSString *pmiEventNameOrAlias; // ivar: _pmiEventNameOrAlias
@property (readonly, nonatomic) NSUInteger thresholdCount; // ivar: _thresholdCount


-(NSUInteger)_recordConfigWordsIntoBuffer:(*NSUInteger)arg0 ;
-(NSUInteger)triggerKind;
-(int)setPMIEventNamed:(id)arg0 threshold:(NSUInteger)arg1 error:(*id)arg2 ;
-(int)start:(*id)arg0 ;
-(int)stop:(*id)arg0 ;


@end


#endif