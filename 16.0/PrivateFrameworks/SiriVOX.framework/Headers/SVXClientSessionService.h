// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXCLIENTSESSIONSERVICE_H
#define SVXCLIENTSESSIONSERVICE_H

@class NSString;
@protocol SVXClientServiceConsuming, SVXClientSessionServicing, SVXPerforming, SVXClientServiceProviding, SVXClientSessionServiceDelegate;

#import <Foundation/Foundation.h>


@interface SVXClientSessionService : NSObject <SVXClientServiceConsuming, SVXClientSessionServicing>

 {
    id<SVXPerforming> *_performer;
    id<SVXClientServiceProviding> *_clientServiceProvider;
    BOOL _isActive;
}


@property (readonly, nonatomic) NSInteger currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SVXClientSessionServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithClientServiceProvider:(id)arg0 analytics:(id)arg1 performer:(id)arg2 ;
-(void)clientServiceDidChange:(BOOL)arg0 ;
-(void)fetchAlarmAndTimerFiringContextWithCompletion:(id)arg0 ;
-(void)fetchStateWithCompletion:(id)arg0 ;
-(void)handleDidBecomeActiveWithActivationContext:(id)arg0 turnID:(id)arg1 ;
-(void)handleDidChangeStateFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(void)handleDidResignActiveWithDeactivationContext:(id)arg0 ;
-(void)handleDidStartSoundWithID:(NSInteger)arg0 ;
-(void)handleDidStopSoundWithID:(NSInteger)arg0 error:(id)arg1 ;
-(void)handleWillBecomeActiveWithActivationContext:(id)arg0 turnID:(id)arg1 ;
-(void)handleWillChangeStateFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(void)handleWillPresentFeedbackWithDialogIdentifier:(id)arg0 ;
-(void)handleWillResignActiveWithOptions:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)handleWillStartSoundWithID:(NSInteger)arg0 ;


@end


#endif