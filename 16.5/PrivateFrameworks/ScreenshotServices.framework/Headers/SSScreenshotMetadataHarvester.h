// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSSCREENSHOTMETADATAHARVESTER_H
#define SSSCREENSHOTMETADATAHARVESTER_H


#import <Foundation/Foundation.h>


@interface SSScreenshotMetadataHarvester : NSObject



+(BOOL)canGenerateDocumentForIdentifier:(id)arg0 ;
+(id)_applicationScreenshotServiceWithPrivateDelegate:(BOOL)arg0 ;
+(id)_axVisibleElementsInViewController:(id)arg0 ;
+(id)_contentRectsForMetadata;
+(id)_jsonEncodedStringsInformationForMetadata;
+(id)_languageForMetadata;
+(id)_preferredContentSizeCategoryForMetadata;
+(id)_screenshotServiceForWindowScene:(id)arg0 wantsPrivateDelegate:(BOOL)arg1 ;
+(id)_screenshotServicesDelegateWithIdentifier:(id)arg0 ;
+(id)_stringInformationFromView:(id)arg0 ;
+(id)screenshotServiceWithIdentifier:(id)arg0 ;
+(int)_interfaceOrientationForMetadata;
+(void)_crawlView:(id)arg0 executingBlock:(id)arg1 ;
+(void)_crawlViewController:(id)arg0 executingBlock:(id)arg1 ;
+(void)_grabPDFRepresentationForIdentifier:(id)arg0 withCallback:(id)arg1 ;
+(void)_grabUserActivityTitleWithCallback:(id)arg0 ;
+(void)harvestScreenshotMetadataAndRespondToAction:(id)arg0 ;
+(void)sendResponseForAction:(id)arg0 withObject:(id)arg1 forKey:(NSUInteger)arg2 ;


@end


#endif