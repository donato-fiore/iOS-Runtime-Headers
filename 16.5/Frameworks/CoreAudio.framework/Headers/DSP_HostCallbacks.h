// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSP_HOSTCALLBACKS_H
#define DSP_HOSTCALLBACKS_H

@class NSString;
@protocol HAL_DSP_HostCallbacks;

#import <Foundation/Foundation.h>


@interface DSP_HostCallbacks : NSObject <HAL_DSP_HostCallbacks>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) function<void (const DSP_Host_Types::MutationRequestConfiguration &)> mutationRequestListener; // ivar: _mutationRequestListener
@property (nonatomic) *DSP_Host_IOProcessor owner; // ivar: _owner
@property (nonatomic) function<void (const AudioObjectPropertyAddress &)> propertyChangeListener; // ivar: _propertyChangeListener
@property (readonly) Class superclass;


-(void)notifyClientsOfCustomPropertyChange:(struct AudioObjectPropertyAddress )arg0 ;
-(void)requestMutation:(id)arg0 ;


@end


#endif