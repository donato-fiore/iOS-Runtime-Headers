// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXRENDERINGCONFIGURATIONOPTIONSMANAGER_H
#define SXRENDERINGCONFIGURATIONOPTIONSMANAGER_H

@class NSString;
@protocol SXHintsConfigurationOptionProvider, SXRenderingConfigurationProvider, SXDocumentProviding, SXHintsConfigurationOption;

#import <Foundation/Foundation.h>


@interface SXRenderingConfigurationOptionsManager : NSObject <SXHintsConfigurationOptionProvider>



@property (readonly, nonatomic) NSObject<SXRenderingConfigurationProvider> *configurationProvider; // ivar: _configurationProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentProviding> *documentProvider; // ivar: _documentProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXHintsConfigurationOption> *hints; // ivar: _hints
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly) Class superclass;


-(BOOL)validateConfigurationOption:(id)arg0 ;
-(BOOL)validateConfigurationOption:(id)arg0 documentSpecVersion:(id)arg1 clientSpecVersion:(id)arg2 ;
-(id)initWithDocumentProvider:(id)arg0 configurationProvider:(id)arg1 ;


@end


#endif