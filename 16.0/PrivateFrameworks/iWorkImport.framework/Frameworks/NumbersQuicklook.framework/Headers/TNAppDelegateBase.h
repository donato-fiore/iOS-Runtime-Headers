// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TNAPPDELEGATEBASE_H
#define TNAPPDELEGATEBASE_H

@class TSABaseApplicationDelegate;



@interface TNAppDelegateBase : TSABaseApplicationDelegate



+(id)tn_sharedPropertiesProvider;
-(BOOL)isValidURLForImportedHyperlink:(id)arg0 targetDocumentRoot:(id)arg1 forCrossDocumentPaste:(BOOL)arg2 ;
-(BOOL)supportsRTL;
-(Class)documentViewControllerClass;
-(Class)propertiesProviderClass;
-(id)createCompatibilityDelegate;
-(id)equationEditorAPDID;
-(id)init;
-(id)previewImageNameForEncryptedNativeDocument;
-(id)previewImageNameForNativeDocument;
-(id)universalPreviewImageNameForDocumentType:(id)arg0 ;
-(void)applicationDidFinishLaunching:(id)arg0 ;
-(void)configureSharedCode;
-(void)p_inputMethodsChanged:(id)arg0 ;
-(void)registerClassTypeMappings;
-(void)registerSOSClassTypeMappings;


@end


#endif