// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUANFEMBEDCONFIGURATIONLOADER_H
#define NUANFEMBEDCONFIGURATIONLOADER_H

@class FCAsyncOnceOperation, NSString, SXJSONDictionary, FCFlintResourceManager;
@protocol NUEmbedConfigurationLoader, FCNewsAppConfigurationManager;

#import <Foundation/Foundation.h>


@interface NUANFEmbedConfigurationLoader : NSObject <NUEmbedConfigurationLoader>



@property (retain, nonatomic) NSObject<FCNewsAppConfigurationManager> *appConfigurationManager; // ivar: _appConfigurationManager
@property (retain, nonatomic) FCAsyncOnceOperation *asyncOnceOperation; // ivar: _asyncOnceOperation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXJSONDictionary *embedConfiguration; // ivar: _embedConfiguration
@property (retain, nonatomic) FCFlintResourceManager *flintResourceManager; // ivar: _flintResourceManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)asyncLoadEmbedConfigurationOnceWithCompletion:(id)arg0 ;
-(id)initWithAppConfigManager:(id)arg0 flintResourceManager:(id)arg1 ;
-(id)loadEmbededConfigurationWithCompletion:(id)arg0 ;


@end


#endif