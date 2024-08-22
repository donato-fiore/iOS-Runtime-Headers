// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXCLIENTAUDIOSYSTEMSERVICE_H
#define SVXCLIENTAUDIOSYSTEMSERVICE_H

@class NSString;
@protocol SVXClientServiceConsuming, SVXClientAudioSystemServicing, SVXPerforming, SVXClientServiceProviding, SVXClientAudioSystemServiceDelegate;

#import <Foundation/Foundation.h>


@interface SVXClientAudioSystemService : NSObject <SVXClientServiceConsuming, SVXClientAudioSystemServicing>

 {
    id<SVXPerforming> *_performer;
    id<SVXClientServiceProviding> *_clientServiceProvider;
    BOOL _isAudioSessionActive;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SVXClientAudioSystemServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithClientServiceProvider:(id)arg0 analytics:(id)arg1 performer:(id)arg2 ;
-(void)clientServiceDidChange:(BOOL)arg0 ;
-(void)handleAudioSessionDidBecomeActive:(BOOL)arg0 activationContext:(id)arg1 deactivationContext:(id)arg2 ;
-(void)handleAudioSessionIDDidChange:(unsigned int)arg0 ;
-(void)handleAudioSessionWillBecomeActive:(BOOL)arg0 activationContext:(id)arg1 deactivationContext:(id)arg2 ;


@end


#endif