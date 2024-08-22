// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMSTATECAPTURE_H
#define FMSTATECAPTURE_H


#import <Foundation/Foundation.h>


@interface FMStateCapture : NSObject

@property (nonatomic) NSUInteger handle; // ivar: _handle
@property (copy, nonatomic) id *stateCaptureBlock; // ivar: _stateCaptureBlock


-(id)init;
-(struct os_state_data_s *)_stateCapture;
-(struct os_state_data_s *)stateDataForDictionary:(id)arg0 title:(id)arg1 ;
-(void)dealloc;
-(void)registerHandlerforStateCapture;
-(void)unregisterHandlerforStateCapture;


@end


#endif