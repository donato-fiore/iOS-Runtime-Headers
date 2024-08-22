// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXCLIENTSESSIONSTATESERVICE_H
#define SVXCLIENTSESSIONSTATESERVICE_H

@class NSString;
@protocol SVXClientServiceConsuming, SVXClientSessionStateServicing, SVXPerforming, SVXClientServiceProviding, SVXClientSessionStateServiceDelegate;

#import <Foundation/Foundation.h>


@interface SVXClientSessionStateService : NSObject <SVXClientServiceConsuming, SVXClientSessionStateServicing>

 {
    id<SVXPerforming> *_performer;
    id<SVXClientServiceProviding> *_clientServiceProvider;
}


@property (readonly, nonatomic) NSInteger currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SVXClientSessionStateServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithClientServiceProvider:(id)arg0 analytics:(id)arg1 performer:(id)arg2 ;
-(void)clientServiceDidChange:(BOOL)arg0 ;
-(void)fetchStateWithCompletion:(id)arg0 ;
-(void)handleDidChangeSessionStateFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(void)handleWillChangeSessionStateFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;


@end


#endif