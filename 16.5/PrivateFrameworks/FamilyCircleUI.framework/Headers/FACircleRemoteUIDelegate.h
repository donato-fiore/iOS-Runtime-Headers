// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FACIRCLEREMOTEUIDELEGATE_H
#define FACIRCLEREMOTEUIDELEGATE_H

@class FARequestConfigurator, AAUIServerUIHookHandler, NSURLRequest, NSMutableDictionary, NSArray, RUIPage, FAInviteSuggestions, NSString, NSDictionary;
@protocol RemoteUIControllerDelegate, FACircleRemoteUIDelegateDelegate;

#import <Foundation/Foundation.h>

#import "FAProfilePictureStore.h"
#import "FACircleContext.h"

@interface FACircleRemoteUIDelegate : NSObject <RemoteUIControllerDelegate>

 {
    FARequestConfigurator *_requestConfigurator;
    AAUIServerUIHookHandler *_serverHookHandler;
    NSURLRequest *_cachedRequest;
    NSMutableDictionary *_objectModelDecorators;
    FAProfilePictureStore *_familyPictureStore;
    NSArray *_recommendations;
    NSArray *_emergencyContacts;
    BOOL _isReplacing;
    RUIPage *_cachedPage;
    FAInviteSuggestions *_suggester;
}


@property (readonly, nonatomic) FACircleContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<FACircleRemoteUIDelegateDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *dismissInfo; // ivar: _dismissInfo
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getEmergencyContacts;
-(id)getIMessageHandlesForRecommendations;
-(id)getInviteSuggestionsDependencies;
-(id)init;
-(id)initWithContext:(id)arg0 serverHookHandler:(id)arg1 pictureStore:(id)arg2 ;
-(void)_broadcastServicesDidChangeNotification;
-(void)_handleObjectModelChangeForController:(id)arg0 objectModel:(id)arg1 isModal:(BOOL)arg2 ;
-(void)_notifyDelegateOfCompletionWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_reportRequestFailureWithResponse:(id)arg0 ;
-(void)_setUserInteractionForRUIPage:(id)arg0 enabled:(BOOL)arg1 ;
-(void)remoteUIController:(id)arg0 didDismissModalNavigationWithObjectModels:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didFinishLoadWithError:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)remoteUIController:(id)arg0 didReceiveHTTPResponse:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)remoteUIController:(id)arg0 didRefreshObjectModel:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didRemoveObjectModel:(id)arg1 ;
-(void)remoteUIController:(id)arg0 loadResourcesForObjectModel:(id)arg1 completion:(id)arg2 ;
-(void)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)remoteUIController:(id)arg0 willPresentModalNavigationController:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg0 ;
-(void)setIMessageHandlesForRecommendations:(id)arg0 ;


@end


#endif