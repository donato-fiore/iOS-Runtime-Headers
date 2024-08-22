// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSP_HALBYPASS_IOPROCESSOR_H
#define DSP_HALBYPASS_IOPROCESSOR_H

@class NSString;
@protocol HAL_DSP_IOProcessor, HAL_DSP_HostCallbacks;

#import <Foundation/Foundation.h>


@interface DSP_HALBypass_IOProcessor : NSObject <HAL_DSP_IOProcessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) *void dspCallbacks; // ivar: _dspCallbacks
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<HAL_DSP_HostCallbacks> *hostCallbacks; // ivar: _hostCallbacks
@property (readonly) Class superclass;


-(BOOL)hasCustomProperty:(struct AudioObjectPropertyAddress )arg0 ;
-(BOOL)setCustomProperty:(struct AudioObjectPropertyAddress )arg0 withData:(id)arg1 error:(*id)arg2 ;
-(id)adaptToConfigurationChange:(id)arg0 withCallbacks:(*void)arg1 error:(*id)arg2 ;
-(id)getCustomProperty:(struct AudioObjectPropertyAddress )arg0 ;
-(id)getCustomPropertyList;
-(id)init;
-(id)negotiateConfigurationChange:(id)arg0 error:(*id)arg1 ;
-(id)retrieveFormats:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif