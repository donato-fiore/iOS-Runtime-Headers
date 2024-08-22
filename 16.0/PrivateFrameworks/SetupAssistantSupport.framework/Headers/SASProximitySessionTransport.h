// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASPROXIMITYSESSIONTRANSPORT_H
#define SASPROXIMITYSESSIONTRANSPORT_H


#import <Foundation/Foundation.h>


@interface SASProximitySessionTransport : NSObject

@property (copy) id *receivedDataBlock; // ivar: _receivedDataBlock


-(void)activate;
-(void)invalidate;
-(void)sendData:(id)arg0 response:(id)arg1 ;


@end


#endif