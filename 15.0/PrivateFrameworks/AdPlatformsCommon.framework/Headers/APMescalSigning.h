// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APMESCALSIGNING_H
#define APMESCALSIGNING_H


#import <Foundation/Foundation.h>

#import "APMescalSigningRequestor.h"

@interface APMescalSigning : NSObject

@property (readonly, nonatomic) APMescalSigningRequestor *requesterObject; // ivar: _requesterObject


-(id)init;
-(id)signatureForData:(id)arg0 ;
-(void)dealloc;
-(void)signatureForData:(id)arg0 completion:(id)arg1 ;
-(void)signatureForData:(id)arg0 waitTime:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif