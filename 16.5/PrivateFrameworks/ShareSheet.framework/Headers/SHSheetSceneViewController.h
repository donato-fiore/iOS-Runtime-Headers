// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHEETSCENEVIEWCONTROLLER_H
#define SHSHEETSCENEVIEWCONTROLLER_H

@class UIViewController, NSString, LPLinkMetadata, FBScene, UIView, FBSceneWorkspace;
@protocol FBSceneDelegate, FBSceneObserver, SHSheetContentView, SHSheetContentPresenter, UIScenePresenter, SHSheetSession;


#import "SHSheetUIServiceClient.h"

@interface SHSheetSceneViewController : UIViewController <FBSceneDelegate, FBSceneObserver, SHSheetContentView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) LPLinkMetadata *headerMetadata;
@property (weak, nonatomic) NSObject<SHSheetContentPresenter> *presenter; // ivar: _presenter
@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, nonatomic) NSObject<UIScenePresenter> *scenePresenter; // ivar: _scenePresenter
@property (readonly, nonatomic) UIView *sceneView; // ivar: _sceneView
@property (readonly, nonatomic) FBSceneWorkspace *sceneWorkspace; // ivar: _sceneWorkspace
@property (retain, nonatomic) SHSheetUIServiceClient *serviceClient; // ivar: _serviceClient
@property (readonly, nonatomic) NSObject<SHSheetSession> *session; // ivar: _session
@property (readonly) Class superclass;


-(id)initWithSession:(id)arg0 ;
-(void)_setupScene;
-(void)_tearDownScene;
-(void)dealloc;
-(void)didUpdateAirDropTransferWithChange:(id)arg0 ;
-(void)reloadActivity:(id)arg0 ;
-(void)reloadContent;
-(void)scene:(id)arg0 clientDidConnect:(id)arg1 ;
-(void)sceneDidDeactivate:(id)arg0 withError:(id)arg1 ;
-(void)updateWithViewModel:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif