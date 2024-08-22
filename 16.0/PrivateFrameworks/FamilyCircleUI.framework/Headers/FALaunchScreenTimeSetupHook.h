// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FALAUNCHSCREENTIMESETUPHOOK_H
#define FALAUNCHSCREENTIMESETUPHOOK_H

@class NSString, RUIObjectModel, RUIServerHookResponse;
@protocol AAUIServerHook, RUIServerHookDelegate;

#import <Foundation/Foundation.h>


@interface FALaunchScreenTimeSetupHook : NSObject <AAUIServerHook>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(id)_extractAgeFromObjectModel:(id)arg0 ;
-(id)_extractNameFromObjectModel:(id)arg0 ;
-(void)_launchScreenTimeSettings;
-(void)_launchScreenTimeSetupForUser:(id)arg0 inObjectModel:(id)arg1 withCompletion:(id)arg2 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;


@end


#endif