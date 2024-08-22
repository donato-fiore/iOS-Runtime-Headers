// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSTILLIMAGEPROCESSINGPLAN_H
#define BWSTILLIMAGEPROCESSINGPLAN_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "BWStillImageSettings.h"

@interface BWStillImageProcessingPlan : NSObject {
    BWStillImageSettings *_settings;
    NSMutableDictionary *_inputsByBufferTypeByPortTypeBySequenceNumber;
}




-(id)description;
-(id)initWithSettings:(id)arg0 ;
-(id)lastAddedInputForSequenceNumber:(unsigned int)arg0 portType:(id)arg1 bufferType:(NSUInteger)arg2 ;
-(void)addInput:(id)arg0 sequenceNumber:(unsigned int)arg1 portType:(id)arg2 bufferType:(NSUInteger)arg3 ;
-(void)addInput:(id)arg0 sequenceNumber:(unsigned int)arg1 portType:(id)arg2 bufferTypes:(id)arg3 ;
-(void)dealloc;


@end


#endif