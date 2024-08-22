// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCONTENTURLCONTROLLER_H
#define TPSCONTENTURLCONTROLLER_H


#import <Foundation/Foundation.h>


@interface TPSContentURLController : NSObject



+(NSInteger)majorVersionForVersionString:(id)arg0 ;
+(id)_boardID;
+(id)_boardIDOrProductHash;
+(id)_platformString;
+(id)_productHash;
+(id)_uiTestLocalBaseURL;
+(id)_uiTestLocalURLForIdentifier:(id)arg0 ;
+(id)assetPathFromAssetConfiguration:(id)arg0 type:(NSInteger)arg1 ;
+(id)contentRequestURLWithContentMapHash:(id)arg0 ;
+(id)contentRequestURLWithContentMapHash:(id)arg0 variantIdentifiers:(id)arg1 useLanguageDefault:(BOOL)arg2 ;
+(id)defaultHost;
+(id)defaultHostPath;
+(id)effectiveHost;
+(id)metaRequestURL;
+(id)modelQueryItem;
+(id)platformQueryItem;
+(id)preferredLocalizations;
+(id)requestURLForAPI:(id)arg0 additionalQueryItems:(id)arg1 useLanguageDefault:(BOOL)arg2 apiVersion:(id)arg3 ;


@end


#endif