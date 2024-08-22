// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMOCKLOGGERPROVIDER_H
#define CNMOCKLOGGERPROVIDER_H

@class NSString;
@protocol CNContactsLoggerProvider, CNAPITriageLogger, CNContactsLogger, CNFavoritesLogger, CNGeminiLogger, CNImageUtilitiesLogger, CNRegulatoryLogger, CNSpotlightIndexingLogger;

#import <Foundation/Foundation.h>


@interface CNMockLoggerProvider : NSObject <CNContactsLoggerProvider>



@property (retain, nonatomic) NSObject<CNAPITriageLogger> *apiTriageLogger; // ivar: _apiTriageLogger
@property (retain, nonatomic) NSObject<CNContactsLogger> *contactsLogger; // ivar: _contactsLogger
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<CNFavoritesLogger> *favoritesLogger; // ivar: _favoritesLogger
@property (retain, nonatomic) NSObject<CNGeminiLogger> *geminiLogger; // ivar: _geminiLogger
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<CNImageUtilitiesLogger> *imageUtilitiesLogger; // ivar: _imageUtilitiesLogger
@property (retain, nonatomic) NSObject<CNRegulatoryLogger> *regulatoryLogger; // ivar: _regulatoryLogger
@property (retain, nonatomic) NSObject<CNSpotlightIndexingLogger> *spotlightIndexingLogger; // ivar: _spotlightIndexingLogger
@property (readonly) Class superclass;


+(id)loggerProvider;


@end


#endif