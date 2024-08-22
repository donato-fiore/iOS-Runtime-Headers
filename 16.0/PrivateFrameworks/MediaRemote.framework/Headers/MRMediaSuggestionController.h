// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRMEDIASUGGESTIONCONTROLLER_H
#define MRMEDIASUGGESTIONCONTROLLER_H

@class NSMutableDictionary, _CDClientContext, _CDContextualChangeRegistration, NSString, NSDictionary;
@protocol LSApplicationWorkspaceObserverProtocol, OS_dispatch_queue, MRMediaSuggestionControllerDelegate;

#import <Foundation/Foundation.h>

#import "MRMediaSuggestionPreferences.h"
#import "MRMediaSuggestionRequest.h"

@interface MRMediaSuggestionController : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    BOOL _registeredForChanges;
    MRMediaSuggestionPreferences *_preferences;
    NSMutableDictionary *_internalSuggestions;
    _CDClientContext *_clientContext;
    _CDContextualChangeRegistration *_changeRegistration;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRMediaSuggestionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) MRMediaSuggestionRequest *request; // ivar: _request
@property (readonly, nonatomic) NSDictionary *suggestions;
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif