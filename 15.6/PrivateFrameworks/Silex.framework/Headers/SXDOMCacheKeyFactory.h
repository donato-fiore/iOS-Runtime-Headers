// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDOMCACHEKEYFACTORY_H
#define SXDOMCACHEKEYFACTORY_H

@class NSString;
@protocol SXDOMCacheKeyFactory, SXDocumentProviding, SXHintsConfigurationOptionProvider;

#import <Foundation/Foundation.h>


@interface SXDOMCacheKeyFactory : NSObject <SXDOMCacheKeyFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentProviding> *documentProvider; // ivar: _documentProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXHintsConfigurationOptionProvider> *hintsConfigurationOptionProvider; // ivar: _hintsConfigurationOptionProvider
@property (readonly) Class superclass;


-(id)createCacheKeyForLayoutOptions:(id)arg0 ;
-(id)initWithDocumentProvider:(id)arg0 hintsConfigurationOptionProvider:(id)arg1 ;


@end


#endif