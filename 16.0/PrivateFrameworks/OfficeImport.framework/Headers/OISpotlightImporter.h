// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OISPOTLIGHTIMPORTER_H
#define OISPOTLIGHTIMPORTER_H


#import <Foundation/Foundation.h>


@interface OISpotlightImporter : NSObject



-(id)init;
-(id)searchableAttributesForOfficeFileAtURL:(id)arg0 error:(*id)arg1 ;
-(id)searchableAttributesForXMLOfficeFileOfType:(NSUInteger)arg0 atURL:(id)arg1 error:(*id)arg2 ;
-(id)sheetNamesFromWorkbookPart:(id)arg0 ;
-(id)textContentForReader:(id)arg0 withType:(NSUInteger)arg1 ;
-(id)textContentFromExcelReader:(id)arg0 ;
-(id)textContentFromPowerPointReader:(id)arg0 ;
-(id)textContentFromWordReader:(id)arg0 ;
-(id)textFromElementsNamed:(char *)arg0 skippingElementsNamed:(char *)arg1 insertingNewlinesOnElementsNamed:(char *)arg2 tabulationsOnElementsNamed:(char *)arg3 inNamespaces:(*char *)arg4 inPackagePart:(id)arg5 ;
-(void)addPackagePropertiesFromReader:(id)arg0 toSearchableAttributes:(id)arg1 ;


@end


#endif