// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKEXTENSIONPROVIDER_H
#define PKEXTENSIONPROVIDER_H

@class NSMutableArray, NSString, NSDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKExtensionProvider : NSObject

@property (retain, nonatomic) NSMutableArray *beginMatchingCompletions; // ivar: _beginMatchingCompletions
@property (retain, nonatomic) NSObject<OS_dispatch_source> *extensionMatchTimer; // ivar: _extensionMatchTimer
@property (copy, nonatomic) NSString *extensionPoint; // ivar: _extensionPoint
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extensionQueue; // ivar: _extensionQueue
@property (nonatomic) BOOL isBeginningMatching; // ivar: _isBeginningMatching
@property (retain, nonatomic) id *matchingContext; // ivar: _matchingContext
@property (retain, nonatomic) NSDictionary *passKitExtensions; // ivar: _passKitExtensions


+(id)providerForExtensionPoint:(id)arg0 ;
-(id)_extensionMatchingEntitlementAttribute;
-(id)_extensionsForContainingApplicationIdentifiers:(id)arg0 ;
-(id)init;
-(id)initWithExtensionPoint:(id)arg0 ;
-(void)_beginMatchingExtensionsWithCompletion:(id)arg0 ;
-(void)_endMatchingExtensions;
-(void)_finishedMatchingExtensions:(id)arg0 withError:(id)arg1 ;
-(void)_invokeAndClearBeginMatchingCompletionsWithError:(id)arg0 ;
-(void)beginExtensionRequestWithExtension:(id)arg0 inputItems:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)extensionWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)extensionsWithContainingApplicationIdentifiers:(id)arg0 completion:(id)arg1 ;


@end


#endif