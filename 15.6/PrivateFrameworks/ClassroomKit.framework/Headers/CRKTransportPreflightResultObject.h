// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKTRANSPORTPREFLIGHTRESULTOBJECT_H
#define CRKTRANSPORTPREFLIGHTRESULTOBJECT_H

@class CATTransport;

#import <Foundation/Foundation.h>


@interface CRKTransportPreflightResultObject : NSObject

@property (readonly, nonatomic) BOOL shouldResetBackoff; // ivar: _shouldResetBackoff
@property (retain, nonatomic) CATTransport *transport; // ivar: _transport


-(id)initWithTransport:(id)arg0 shouldResetBackoff:(BOOL)arg1 ;
-(id)takeTransport;
-(void)dealloc;


@end


#endif