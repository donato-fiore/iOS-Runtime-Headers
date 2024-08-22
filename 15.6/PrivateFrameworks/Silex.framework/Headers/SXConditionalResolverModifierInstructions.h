// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCONDITIONALRESOLVERMODIFIERINSTRUCTIONS_H
#define SXCONDITIONALRESOLVERMODIFIERINSTRUCTIONS_H

@class NSString;
@protocol SXConditionalResolverModifierInstructions, SXDocumentProviding, SXHintsConfigurationOptionProvider;

#import <Foundation/Foundation.h>


@interface SXConditionalResolverModifierInstructions : NSObject <SXConditionalResolverModifierInstructions>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentProviding> *documentProvider; // ivar: _documentProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXHintsConfigurationOptionProvider> *hintsConfigurationOptionProvider; // ivar: _hintsConfigurationOptionProvider
@property (readonly, nonatomic) BOOL shouldResolveAutoplacement;
@property (readonly, nonatomic) BOOL shouldResolveComponentLayouts;
@property (readonly, nonatomic) BOOL shouldResolveComponentStyles;
@property (readonly, nonatomic) BOOL shouldResolveComponentTextStyles;
@property (readonly, nonatomic) BOOL shouldResolveComponents;
@property (readonly, nonatomic) BOOL shouldResolveDocumentStyle;
@property (readonly, nonatomic) BOOL shouldResolveTextStyles;
@property (readonly) Class superclass;


-(id)hints;
-(id)initWithDocumentProvider:(id)arg0 hintsConfigurationOptionProvider:(id)arg1 ;


@end


#endif