// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQPREFERENCESFRESHMINTMANAGER_H
#define ICQPREFERENCESFRESHMINTMANAGER_H

@class NSString;
@protocol ICQUpgradeFlowManagerDelegate;

#import <Foundation/Foundation.h>

#import "ICQUpgradeFlowManager.h"

@interface ICQPreferencesFreshmintManager : NSObject <ICQUpgradeFlowManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICQUpgradeFlowManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *freshmintFlowCompletion; // ivar: _freshmintFlowCompletion
@property (retain, nonatomic) ICQUpgradeFlowManager *freshmintFlowManager; // ivar: _freshmintFlowManager
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldShowFreshmint; // ivar: _shouldShowFreshmint
@property (readonly) Class superclass;


-(void)beginFlowWithDelegate:(id)arg0 offer:(id)arg1 url:(id)arg2 completion:(id)arg3 ;
-(void)runFreshmintCompletionDidComplete:(BOOL)arg0 ;
-(void)upgradeFlowManagerDidCancel:(id)arg0 ;
-(void)upgradeFlowManagerDidComplete:(id)arg0 ;


@end


#endif