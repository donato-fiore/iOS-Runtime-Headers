// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARONDEVICEENDPOINTERINFO_H
#define _EARONDEVICEENDPOINTERINFO_H


#import <Foundation/Foundation.h>


@interface _EAROnDeviceEndpointerInfo : NSObject {
    HybridClientConfigs _hybridClientConfigs;
}




-(id)getEndpointerExtraDelayFrequencyForTask:(id)arg0 ;
-(id)getEndpointerThresholdForClientModelVersion:(unsigned int)arg0 task:(id)arg1 ;
-(id)initWithConfig:(id)arg0 ;


@end


#endif