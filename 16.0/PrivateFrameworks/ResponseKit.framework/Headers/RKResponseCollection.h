// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RKRESPONSECOLLECTION_H
#define RKRESPONSECOLLECTION_H

@class NSURL, NSMutableDictionary;
@protocol RKDisplayStringsProvider;

#import <Foundation/Foundation.h>


@interface RKResponseCollection : NSObject

@property (readonly) NSObject<RKDisplayStringsProvider> *displayStringsProvider; // ivar: _displayStringsProvider
@property (readonly) NSURL *dynamicDataURL; // ivar: _dynamicDataURL
@property (retain) NSMutableDictionary *personalizersByLanguageID; // ivar: _personalizersByLanguageID
@property (retain) NSMutableDictionary *responseCatalog; // ivar: _responseCatalog


+(id)responsesForFixedPhrase:(id)arg0 withLanguage:(id)arg1 ;
+(id)responsesForFullScreenMoments:(id)arg0 ;
+(id)speechActsForCategory:(NSUInteger)arg0 platform:(id)arg1 ;
-(BOOL)lock;
-(id)cannedResponsesForCategory:(id)arg0 withLanguage:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithDynamicDataURL:(id)arg0 displayStringsProvider:(id)arg1 ;
-(id)personalizerForLanguageID:(id)arg0 ;
-(id)responsesForCategory:(NSUInteger)arg0 gender:(NSUInteger)arg1 maximumResponses:(NSUInteger)arg2 withLanguage:(id)arg3 context:(id)arg4 options:(NSUInteger)arg5 ;
-(id)standardResponsesByCategoryForLanguageIdentifier:(id)arg0 andUsage:(id)arg1 ;
-(void)flushDynamicData;
-(void)registerResponse:(id)arg0 forMessage:(id)arg1 withLanguage:(id)arg2 context:(id)arg3 effectiveDate:(id)arg4 ;
-(void)resetRegisteredResponses;
-(void)unlock;


@end


#endif