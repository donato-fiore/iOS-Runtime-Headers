// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASESSION_H
#define PKDASESSION_H

@class NSString, DASession;
@protocol DASessionDelegate, PKSession, PKSessionDelegate;

#import <Foundation/Foundation.h>


@interface PKDASession : NSObject <DASessionDelegate, PKSession>

 {
    uint8_t _sessionState;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DASession *session; // ivar: _session
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)daSession:(id)arg0 didBecomeActive:(id)arg1 ;
-(void)daSession:(id)arg0 didEnd:(id)arg1 ;
-(void)dealloc;
-(void)endSession;


@end


#endif