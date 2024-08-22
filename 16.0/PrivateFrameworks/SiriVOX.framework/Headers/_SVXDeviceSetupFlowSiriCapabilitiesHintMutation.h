// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXDEVICESETUPFLOWSIRICAPABILITIESHINTMUTATION_H
#define _SVXDEVICESETUPFLOWSIRICAPABILITIESHINTMUTATION_H

@class NSString;
@protocol SVXDeviceSetupFlowSiriCapabilitiesHintMutating;

#import <Foundation/Foundation.h>

#import "SVXDeviceSetupFlowSiriCapabilitiesHint.h"

@interface _SVXDeviceSetupFlowSiriCapabilitiesHintMutation : NSObject <SVXDeviceSetupFlowSiriCapabilitiesHintMutating>

 {
    SVXDeviceSetupFlowSiriCapabilitiesHint *_baseModel;
    NSInteger _style;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setStyle:(NSInteger)arg0 ;


@end


#endif