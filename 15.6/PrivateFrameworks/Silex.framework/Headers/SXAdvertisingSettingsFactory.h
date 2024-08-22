// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXADVERTISINGSETTINGSFACTORY_H
#define SXADVERTISINGSETTINGSFACTORY_H

@class NSString;
@protocol SXAdvertisingSettingsFactory, SXDebugAdvertisementSettingsProvider, SXDocumentProviding;

#import <Foundation/Foundation.h>


@interface SXAdvertisingSettingsFactory : NSObject <SXAdvertisingSettingsFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<SXDebugAdvertisementSettingsProvider> *debugSettingsProvider; // ivar: _debugSettingsProvider
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentProviding> *documentProvider; // ivar: _documentProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createAdvertisingSettingsWithDOMObjectProvider:(id)arg0 ;
-(id)initWithDocumentProvider:(id)arg0 debugSettingsProvider:(id)arg1 ;


@end


#endif