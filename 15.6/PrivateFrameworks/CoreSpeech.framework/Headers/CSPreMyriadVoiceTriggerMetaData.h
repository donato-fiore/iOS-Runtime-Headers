// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSPREMYRIADVOICETRIGGERMETADATA_H
#define CSPREMYRIADVOICETRIGGERMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CSPreMyriadVoiceTriggerMetaData : NSObject

@property (retain, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (nonatomic) float firstPassMyriadGoodnessScore; // ivar: _firstPassMyriadGoodnessScore
@property (nonatomic) BOOL isSecondPassRunning; // ivar: _isSecondPassRunning


-(id)init;


@end


#endif