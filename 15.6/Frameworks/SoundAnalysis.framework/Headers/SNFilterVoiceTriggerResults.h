// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNFILTERVOICETRIGGERRESULTS_H
#define SNFILTERVOICETRIGGERRESULTS_H


#import <Foundation/Foundation.h>

#import "SNVoiceTriggerResult.h"

@interface SNFilterVoiceTriggerResults : NSObject {
    ? _timeBetweenTriggers;
    SNVoiceTriggerResult *_lastResult;
}




-(id)initWithTimeBetweenTriggers:(struct ? )arg0 ;
-(id)removeOverlappingResults:(id)arg0 ;


@end


#endif