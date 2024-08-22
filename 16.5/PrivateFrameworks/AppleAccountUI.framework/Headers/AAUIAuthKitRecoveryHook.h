// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIAUTHKITRECOVERYHOOK_H
#define AAUIAUTHKITRECOVERYHOOK_H

@class NSString, RUIObjectModel, AKAppleIDServerUIDataHarvester, RUIServerHookResponse;
@protocol RUIServerHook, RUIServerHookDelegate;

#import <Foundation/Foundation.h>


@interface AAUIAuthKitRecoveryHook : NSObject <RUIServerHook>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) AKAppleIDServerUIDataHarvester *serverDataHarvester; // ivar: _serverDataHarvester
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse; // ivar: _serverHookResponse
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(id)_cdpStateUIProvider;
-(void)harvestDataFromResponse:(id)arg0 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;


@end


#endif