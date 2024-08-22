// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKDIAGNOSTICCONTEXTMOCK_H
#define DKDIAGNOSTICCONTEXTMOCK_H

@class NSString;
@protocol DKResponder;

#import <Foundation/Foundation.h>


@interface DKDiagnosticContextMock : NSObject <DKResponder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)enableVolumeHUD:(BOOL)arg0 ;
-(void)getAsset:(id)arg0 completion:(id)arg1 ;
-(void)requestPluginReloadOnFinishWithCompletion:(id)arg0 ;
-(void)setScreenToBrightness:(float)arg0 animate:(BOOL)arg1 ;
-(void)showUI:(id)arg0 completion:(id)arg1 ;
-(void)uploadAssets:(id)arg0 completion:(id)arg1 ;


@end


#endif