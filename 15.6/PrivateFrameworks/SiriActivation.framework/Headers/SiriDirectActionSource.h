// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIDIRECTACTIONSOURCE_H
#define SIRIDIRECTACTIONSOURCE_H

@protocol SiriDirectActionSourceDelegate;


#import "SiriActivationSource.h"

@interface SiriDirectActionSource : SiriActivationSource

@property (weak, nonatomic) NSObject<SiriDirectActionSourceDelegate> *delegate; // ivar: _delegate


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)activateWithContext:(id)arg0 ;
-(void)activateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)canActivateChangedTo:(id)arg0 ;
-(void)configureConnection;


@end


#endif