// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXWEBCONTENTCONFIGURATIONPROVIDER_H
#define SXWEBCONTENTCONFIGURATIONPROVIDER_H

@class NSString, NSLocale;
@protocol SXPresentationAttributesObserver, SXWebContentConfigurationProvider, SWLocation, SXPresentationAttributesProvider, SXStoreFrontProvider;

#import <Foundation/Foundation.h>


@interface SXWebContentConfigurationProvider : NSObject <SXPresentationAttributesObserver, SXWebContentConfigurationProvider>



@property (copy, nonatomic) id *changeBlock; // ivar: _changeBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSObject<SWLocation> *location; // ivar: _location
@property (readonly, nonatomic) NSObject<SXPresentationAttributesProvider> *presentationAttributesProvider; // ivar: _presentationAttributesProvider
@property (readonly, nonatomic) NSObject<SXStoreFrontProvider> *storeFrontProvider; // ivar: _storeFrontProvider
@property (readonly) Class superclass;


-(id)configurationForSize:(struct CGSize )arg0 dataSources:(id)arg1 sourceURL:(id)arg2 ;
-(id)initWithPresentationAttributesProvider:(id)arg0 storeFrontProvider:(id)arg1 locale:(id)arg2 location:(id)arg3 ;
-(void)invokeChangeListener;
-(void)onChange:(id)arg0 ;
-(void)presentationAttributesDidChangeFrom:(id)arg0 toAttributes:(id)arg1 ;


@end


#endif