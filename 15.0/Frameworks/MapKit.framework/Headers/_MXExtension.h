// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MXEXTENSION_H
#define _MXEXTENSION_H

@class NSDictionary, NSSet, NSString, NSExtension;

#import <Foundation/Foundation.h>

#import "_MXExtensionProvider.h"

@interface _MXExtension : NSObject

@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSSet *capabilities;
@property (readonly, copy, nonatomic) NSString *containingAppDisplayName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDictionary *infoDictionary;
@property (weak, nonatomic) _MXExtensionProvider *provider; // ivar: _provider
@property (readonly, nonatomic) NSUInteger type;


+(BOOL)shouldDeserializeCacheItems;
+(void)setShouldDeserializeCacheItems:(BOOL)arg0 ;
-(BOOL)_isIntentExtension;
-(BOOL)_isMapsExtension;
-(BOOL)canSupportIntent:(id)arg0 ;
-(BOOL)canSupportIntentClass:(Class)arg0 ;
-(id)_containingAppIdentifer;
-(id)_iconForTableUI;
-(id)_iconWithFormat:(int)arg0 ;
-(id)confirmIntent:(id)arg0 expectResponseClass:(Class)arg1 withCompletion:(id)arg2 ;
-(id)description;
-(id)handleIntent:(id)arg0 expectResponseClass:(Class)arg1 withCompletion:(id)arg2 ;
-(id)handleRequest:(id)arg0 requestDispatcher:(id)arg1 completion:(id)arg2 ;
-(id)initWithExtensionIdentifier:(id)arg0 extensionProvider:(id)arg1 ;
-(id)resolveIntentSlot:(id)arg0 forIntent:(id)arg1 completionBlock:(id)arg2 ;
-(id)siblingExtensions;
-(id)startSendingUpdatesForIntent:(id)arg0 toObserver:(id)arg1 ;
-(id)startSendingUpdatesForRequest:(id)arg0 requestDispatcher:(id)arg1 toObserver:(id)arg2 ;
-(void)_loadCacheItems:(id)arg0 ;
// -(void)startExtensionServiceWithInputItems:(id)arg0 begin:(id)arg1 completion:(unk)arg2  ;


@end


#endif