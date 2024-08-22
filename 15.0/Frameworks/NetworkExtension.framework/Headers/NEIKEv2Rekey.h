// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2REKEY_H
#define NEIKEV2REKEY_H

@class PCSimpleTimer, NSTimer, NSString;
@protocol NSObject;

#import <Foundation/Foundation.h>


@interface NEIKEv2Rekey : NSObject <NSObject>



@property (retain) PCSimpleTimer *childLifetime; // ivar: _childLifetime
@property int childLifetimeMinutes; // ivar: _childLifetimeMinutes
@property (retain) NSTimer *childLifetimeNStimer; // ivar: _childLifetimeNStimer
@property (copy) id *childRekeyHandler; // ivar: _childRekeyHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) PCSimpleTimer *ikeLifetime; // ivar: _ikeLifetime
@property int ikeLifetimeMinutes; // ivar: _ikeLifetimeMinutes
@property (retain) NSTimer *ikeLifetimeNSTimer; // ivar: _ikeLifetimeNSTimer
@property (copy) id *ikeRekeyHandler; // ivar: _ikeRekeyHandler
@property (readonly) Class superclass;


-(void)clearTimers;
-(void)dealloc;
-(void)invokeChildRekeyHandler;
-(void)invokeIKERekeyHandler;
-(void)startChildTimer:(int)arg0 timeoutHandler:(id)arg1 ;
-(void)startIKETimer:(int)arg0 timeoutHandler:(id)arg1 ;


@end


#endif