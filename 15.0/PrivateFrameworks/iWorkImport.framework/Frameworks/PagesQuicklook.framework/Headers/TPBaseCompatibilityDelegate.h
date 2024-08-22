// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPBASECOMPATIBILITYDELEGATE_H
#define TPBASECOMPATIBILITYDELEGATE_H

@class NSString;
@protocol TSKCompatibilityDelegate;

#import <Foundation/Foundation.h>


@interface TPBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isExportSupportedForType:(id)arg0 exporterOptions:(id)arg1 documentRoot:(id)arg2 ;
-(BOOL)isIBADocumentType:(id)arg0 ;
-(BOOL)isSageDocumentType:(id)arg0 ;
-(BOOL)isTCMessageExceptionErrorDomain:(id)arg0 ;
-(BOOL)isTextOnlyType:(id)arg0 ;
-(Class)exportOptionsControllerClass;
-(Class)exporterClassForType:(id)arg0 options:(id)arg1 ;
-(Class)importerClassForType:(id)arg0 path:(id)arg1 ;
-(id)EPUBExportCategories;
-(id)EPUBExportLanguageCodes;
-(id)backwardsCompatibleTypeForType:(id)arg0 ;
-(id)exportableTypes;
-(id)indexXmlFilename;
-(id)needNewerVersionIndexXmlContentString;
-(id)nestedDocumentFilename;
-(id)newExportableDocumentTypesForFlag:(NSUInteger)arg0 ;
-(id)unsupportedExportMessageStringForType:(id)arg0 ;


@end


#endif