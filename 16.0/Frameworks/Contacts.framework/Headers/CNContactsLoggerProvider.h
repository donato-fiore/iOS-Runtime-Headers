// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTSLOGGERPROVIDER_H
#define CNCONTACTSLOGGERPROVIDER_H

@class NSString;
@protocol CNContactsLoggerProvider, CNContactsLogger, CNSpotlightIndexingLogger, CNRegulatoryLogger, CNFavoritesLogger, CNGeminiLogger, CNAPITriageLogger, CNImageUtilitiesLogger;

#import <Foundation/Foundation.h>


@interface CNContactsLoggerProvider : NSObject <CNContactsLoggerProvider>

 {
    id<CNContactsLogger> *_contactsLogger;
    id<CNSpotlightIndexingLogger> *_spotlightIndexingLogger;
    id<CNRegulatoryLogger> *_regulatoryLogger;
    id<CNFavoritesLogger> *_favoritesLogger;
    id<CNGeminiLogger> *_geminiLogger;
    id<CNAPITriageLogger> *_apiTriageLogger;
    id<CNImageUtilitiesLogger> *_imageUtilitiesLogger;
}


@property (readonly, nonatomic) NSObject<CNAPITriageLogger> *apiTriageLogger;
@property (readonly, nonatomic) NSObject<CNContactsLogger> *contactsLogger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<CNFavoritesLogger> *favoritesLogger;
@property (readonly, nonatomic) NSObject<CNGeminiLogger> *geminiLogger;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNImageUtilitiesLogger> *imageUtilitiesLogger;
@property (readonly, nonatomic) NSObject<CNRegulatoryLogger> *regulatoryLogger;
@property (readonly, nonatomic) NSObject<CNSpotlightIndexingLogger> *spotlightIndexingLogger;
@property (readonly) Class superclass;


+(id)defaultProvider;


@end


#endif