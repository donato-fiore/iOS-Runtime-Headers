// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSEXTENSION_H
#define NSEXTENSION_H

@class NSDictionary, NSArray;
@protocol PKPlugIn;

#import <Foundation/Foundation.h>

#import "NSBundle.h"
#import "NSString.h"

@interface NSExtension : NSObject

@property (readonly, retain, nonatomic) NSBundle *_extensionBundle;
@property (readonly, copy, nonatomic) NSString *_localizedName;
@property (readonly, copy, nonatomic) NSString *_localizedShortName;
@property (retain, nonatomic, setter=_setPlugIn:) NSObject<PKPlugIn> *_plugIn;
@property (copy, nonatomic) id *_requestPostCompletionBlock;
@property (copy, nonatomic) id *_requestPostCompletionBlockWithItems;
@property (readonly) BOOL _wantsProcessPerRequest;
@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, copy, nonatomic) NSArray *icons;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *infoDictionary;
@property (readonly, nonatomic) BOOL optedIn;
@property (copy, nonatomic) id *requestCancellationBlock;
@property (copy, nonatomic) id *requestCompletionBlock;
@property (copy, nonatomic) id *requestInterruptionBlock;
@property (readonly, copy, nonatomic) NSString *version;


+(BOOL)_evaluateActivationRuleWithoutWorkarounds:(id)arg0 withExtensionItemsRepresentation:(id)arg1 ;
+(BOOL)_shouldLogExtensionDiscovery;
+(BOOL)evaluateActivationRule:(id)arg0 withExtensionItemsRepresentation:(id)arg1 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)beginMatchingExtensionsWithAttributes:(id)arg0 completion:(id)arg1 ;
+(id)extensionWithIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)extensionWithIdentifier:(id)arg0 excludingDisabledExtensions:(BOOL)arg1 error:(*id)arg2 ;
+(id)extensionsWithMatchingAttributes:(id)arg0 error:(*id)arg1 ;
+(id)globalStateQueueForExtension:(id)arg0 ;
+(id)predicateForActivationRule:(id)arg0 ;
+(void)endMatchingExtensions:(id)arg0 ;
+(void)extensionWithURL:(id)arg0 completion:(id)arg1 ;
+(void)extensionWithUUID:(id)arg0 completion:(id)arg1 ;
+(void)extensionsWithMatchingAttributes:(id)arg0 completion:(id)arg1 ;
+(void)initializeFiltering;
-(BOOL)_isPhotoServiceAccessGranted;
-(BOOL)attemptOptIn:(*id)arg0 ;
-(BOOL)attemptOptOut:(*id)arg0 ;
-(id)_extensionContextForUUID:(id)arg0 ;
-(id)_init;
-(id)_initWithPKPlugin:(id)arg0 ;
-(id)beginExtensionRequestWithInputItems:(id)arg0 error:(*id)arg1 ;
-(id)beginExtensionRequestWithOptions:(NSUInteger)arg0 inputItems:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)objectForInfoDictionaryKey:(id)arg0 ;
-(int)pidForRequestIdentifier:(id)arg0 ;
-(void)_dropAssertion;
-(void)_hostDidBecomeActiveNote:(id)arg0 ;
-(void)_hostDidEnterBackgroundNote:(id)arg0 ;
-(void)_hostWillEnterForegroundNote:(id)arg0 ;
-(void)_hostWillResignActiveNote:(id)arg0 ;
-(void)_kill:(int)arg0 ;
-(void)_safelyBeginUsing:(id)arg0 ;
-(void)_safelyEndUsing:(id)arg0 ;
-(void)_setAllowedErrorClasses:(id)arg0 ;
-(void)beginExtensionRequestWithInputItems:(id)arg0 completion:(id)arg1 ;
-(void)beginExtensionRequestWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 completion:(id)arg2 ;
-(void)beginExtensionRequestWithOptions:(NSUInteger)arg0 inputItems:(id)arg1 completion:(id)arg2 ;
-(void)beginExtensionRequestWithOptions:(NSUInteger)arg0 inputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(id)arg3 ;
-(void)cancelExtensionRequestWithIdentifier:(id)arg0 ;


@end


#endif