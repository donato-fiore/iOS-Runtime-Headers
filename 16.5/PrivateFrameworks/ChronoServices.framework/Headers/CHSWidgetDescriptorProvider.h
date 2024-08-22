// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSWIDGETDESCRIPTORPROVIDER_H
#define CHSWIDGETDESCRIPTORPROVIDER_H

@class NSDictionary, NSMutableSet, NSMutableArray, NSString, NSSet;
@protocol BSDescriptionProviding, CHSChronoServiceClient;

#import <Foundation/Foundation.h>

#import "CHSChronoServicesConnection.h"

@interface CHSWidgetDescriptorProvider : NSObject <BSDescriptionProviding, CHSChronoServiceClient>

 {
    os_unfair_lock_s _lock;
    NSDictionary *_lock_descriptorsByExtensionIdentifier;
    NSMutableSet *_lock_observers;
    CHSChronoServicesConnection *_lock_connection;
    BOOL _lock_hasLoadedContentOnce;
    NSMutableArray *_lock_loadedDescriptorsCompletions;
    NSMutableArray *_lock_loadedDescriptorsContainerIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *descriptors;
@property (readonly, copy, nonatomic) NSDictionary *descriptorsByExtensionIdentifier;
@property (copy, nonatomic) id *eduModeProvider; // ivar: _eduModeProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isEDUMode;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptorForPersonality:(id)arg0 ;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_lock_addNewDescriptorsFromDescriptors:(id)arg0 ;
-(void)_lock_loadContentInitiallySynchronouslyIfNecessary;
-(void)_lock_notifyDescriptorsDidLoad;
-(void)_lock_notifyObserversDescriptorsDidChange;
-(void)_lock_postDEPRECATEDDescriptorsDidChangeIfNecessary;
-(void)_lock_reloadContentAsynchronouslyForContainerIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)reloadDescriptorsForContainerIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)widgetDescriptorsDidChange:(id)arg0 ;


@end


#endif