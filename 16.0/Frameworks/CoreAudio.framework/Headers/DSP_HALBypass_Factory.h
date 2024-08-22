// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSP_HALBYPASS_FACTORY_H
#define DSP_HALBYPASS_FACTORY_H

@class NSString;
@protocol HAL_DSP_Factory;

#import <Foundation/Foundation.h>


@interface DSP_HALBypass_Factory : NSObject <HAL_DSP_Factory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createProcessor:(id)arg0 withHost:(id)arg1 ;


@end


#endif