// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKDIAGNOSTICXPCMANAGER_H
#define DKDIAGNOSTICXPCMANAGER_H

@class NSMutableArray, NSString, NSMutableDictionary;
@protocol DKAssetResponder, DKUIResponder;


#import "DKDiagnosticManager.h"

@interface DKDiagnosticXPCManager : DKDiagnosticManager <DKAssetResponder, DKUIResponder>



@property (retain, nonatomic) NSMutableArray *activeDiagnostics; // ivar: _activeDiagnostics
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *diagnostics; // ivar: _diagnostics
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<DKUIResponder> *uiResponder; // ivar: _uiResponder


-(id)attributesForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 connectionRoute:(NSUInteger)arg1 ;
-(void)beginDiagnosticWithIdentifier:(id)arg0 parameters:(id)arg1 completion:(id)arg2 ;
-(void)cancelAllDiagnostics;
-(void)diagnosticsWithCompletion:(id)arg0 ;
-(void)getAsset:(id)arg0 completion:(id)arg1 ;
-(void)registerDiagnosticWithAttributes:(id)arg0 ;
-(void)showUI:(id)arg0 completion:(id)arg1 ;


@end


#endif