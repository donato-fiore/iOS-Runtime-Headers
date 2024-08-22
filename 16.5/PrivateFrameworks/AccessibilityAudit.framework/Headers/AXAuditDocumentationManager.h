// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITDOCUMENTATIONMANAGER_H
#define AXAUDITDOCUMENTATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface AXAuditDocumentationManager : NSObject



+(NSInteger)getAXDocumentationType:(id)arg0 isCatalyst:(BOOL)arg1 ;
+(id)_appleDocViewerURLForWebDocURL:(id)arg0 ;
+(id)_docTypeCatalystDictionary;
+(id)_docTypeDictionary;
+(id)_getOriginaliOSTitle:(id)arg0 ;
+(id)_macOSToiOSTitleDictionary;
+(id)appleDocURLForType:(NSInteger)arg0 ;
+(id)appleDocViewerURLs;
+(id)sharedManager;
+(id)webDocURLForType:(NSInteger)arg0 ;
+(id)webpageURLs;


@end


#endif