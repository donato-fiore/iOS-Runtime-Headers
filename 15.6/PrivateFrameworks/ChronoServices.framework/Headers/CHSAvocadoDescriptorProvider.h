// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSAVOCADODESCRIPTORPROVIDER_H
#define CHSAVOCADODESCRIPTORPROVIDER_H

@class NSDictionary, NSMutableSet, NSString, NSSet;
@protocol BSDescriptionProviding, CHSChronoWidgetServiceClient;

#import <Foundation/Foundation.h>

#import "CHSChronoServicesConnection.h"

@interface CHSAvocadoDescriptorProvider : NSObject <BSDescriptionProviding, CHSChronoWidgetServiceClient>

 {
    os_unfair_lock_s _lock;
    NSDictionary *_lock_descriptorsByExtensionIdentifier;
    NSMutableSet *_lock_observers;
    CHSChronoServicesConnection *_lock_server;
    BOOL _lock_hasLoadedContentOnce;
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
-(id)initWithServer:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_lock_loadContentInitiallySynchronouslyIfNecessary;
-(void)_lock_postDEPRECATEDDescriptorsDidChangeIfNecessary;
-(void)addObserver:(id)arg0 ;
-(void)avocadoDescriptorsDidChange:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif