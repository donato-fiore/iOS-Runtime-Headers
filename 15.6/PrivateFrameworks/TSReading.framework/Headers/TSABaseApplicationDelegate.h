// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSABASEAPPLICATIONDELEGATE_H
#define TSABASEAPPLICATIONDELEGATE_H

@class NSArray, NSString;
@protocol TSADownloadDelegate;


#import "TSKApplicationDelegate.h"

@interface TSABaseApplicationDelegate : TSKApplicationDelegate

@property (readonly, nonatomic) NSArray *applicationTemplateVariants;
@property (retain, nonatomic) NSObject<TSADownloadDelegate> *downloadDelegate; // ivar: _downloadDelegate
@property (readonly, nonatomic) NSArray *importableDocumentTypes;
@property (readonly, nonatomic) NSString *nativeDocumentExtension;
@property (readonly, nonatomic) NSString *nativeDocumentType;
@property (readonly, nonatomic) NSString *nativeSFFDocumentType;
@property (readonly, nonatomic) NSArray *readableDocumentTypes;
@property (readonly, nonatomic) NSString *tangierEditingFormatDocumentType;
@property (readonly, nonatomic) NSString *templateDocumentExtension;
@property (readonly, nonatomic) NSString *templateDocumentType;
@property (readonly, nonatomic) NSString *templateSFFDocumentType;


+(id)sharedDelegate;
+(void)presentAlertController:(id)arg0 animated:(BOOL)arg1 ;
+(void)resetSharedConfigurations;
-(BOOL)URLIsValidForImportedHyperlink:(id)arg0 ;
-(BOOL)isReadableDocumentType:(id)arg0 ;
-(BOOL)openURL:(id)arg0 sourceDocumentRoot:(id)arg1 ;
-(CGFloat)maximumAspectRatioForPreviewImage;
-(CGFloat)mimimumAspectRatioForPreviewImage;
-(Class)documentRootClass;
-(id)applicationTemplateVariantsForLocale:(struct __CFLocale *)arg0 ;
-(id)existingNestedDocumentPathForPath:(id)arg0 ;
-(id)init;
-(id)invalidURLSchemes;
-(id)validURLSchemes;
-(void)dealloc;
-(void)persistenceError:(id)arg0 ;
-(void)registerDefaults;


@end


#endif