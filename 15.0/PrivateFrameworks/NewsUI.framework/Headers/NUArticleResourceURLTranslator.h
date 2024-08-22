// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUARTICLERESOURCEURLTRANSLATOR_H
#define NUARTICLERESOURCEURLTRANSLATOR_H

@class NSString;
@protocol NUArticleResourceURLTranslator, FCNewsAppConfigurationManager;

#import <Foundation/Foundation.h>


@interface NUArticleResourceURLTranslator : NSObject <NUArticleResourceURLTranslator>



@property (readonly, nonatomic) NSObject<FCNewsAppConfigurationManager> *appConfigurationManager; // ivar: _appConfigurationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)endpointForScheme:(id)arg0 ;
-(id)defaultURLForEndpoint:(NSInteger)arg0 ;
-(id)initWithAppConfigurationManager:(id)arg0 ;
-(id)translateFileURLForURL:(id)arg0 ;


@end


#endif