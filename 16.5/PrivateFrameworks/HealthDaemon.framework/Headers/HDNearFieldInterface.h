// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDNEARFIELDINTERFACE_H
#define HDNEARFIELDINTERFACE_H

@protocol HDNearFieldInterfaceDelegate;

#import <Foundation/Foundation.h>


@interface HDNearFieldInterface : NSObject

@property (weak, nonatomic) NSObject<HDNearFieldInterfaceDelegate> *delegate; // ivar: _delegate


-(BOOL)isFieldDetectSessionInProgress;
-(BOOL)isNdefTagSessionInProgress;
-(BOOL)setFieldDetectEnabled:(BOOL)arg0 ;
-(id)releaseSinglePollExpressModeAssertion;
-(id)startSinglePollExpressModeAssertion:(CGFloat)arg0 ;
-(void)endFieldDetectSession;
-(void)endNdefTagSession;
-(void)startFieldDetectSessionWithCompletion:(id)arg0 ;
-(void)startNdefTagSessionWithBluetoothLESecureOOBData:(id)arg0 completion:(id)arg1 ;


@end


#endif