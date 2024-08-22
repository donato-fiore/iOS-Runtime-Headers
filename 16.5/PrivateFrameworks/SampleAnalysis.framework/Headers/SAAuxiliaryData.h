// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAAUXILIARYDATA_H
#define SAAUXILIARYDATA_H


#import <Foundation/Foundation.h>

#import "SAFanSpeed.h"
#import "SATimestamp.h"

@interface SAAuxiliaryData : NSObject {
    SAFanSpeed *_fanSpeed;
    ? _mountStatus;
    SATimestamp *_timestamp;
}




+(id)auxiliaryDataForTimestamp:(id)arg0 ;
-(void)dealloc;


@end


#endif