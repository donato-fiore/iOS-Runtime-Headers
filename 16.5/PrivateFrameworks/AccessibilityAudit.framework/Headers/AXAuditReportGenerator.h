// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITREPORTGENERATOR_H
#define AXAUDITREPORTGENERATOR_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface AXAuditReportGenerator : NSObject

@property (retain, nonatomic) NSMutableArray *_issues; // ivar: __issues
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName


-(id)_anyAuditIssueFromResults:(id)arg0 ;
-(id)_defaultSavePath;
-(id)_fileExtensionForReportType:(NSInteger)arg0 ;
-(id)_fullOutputPathForReportType:(NSInteger)arg0 outputPath:(id)arg1 outputFilename:(id)arg2 ;
-(id)_generateHTMLSourceFromTemplates;
-(id)_htmlTemplate;
-(id)_htmlTemplatePath;
-(id)_josnDictionary;
-(id)_jsonArrayForIssues:(id)arg0 ;
-(id)_jsonArrayForScreens;
-(id)_jsonData;
-(id)_jsonDictionaryForAuditIssueImage:(id)arg0 thumbnailOnly:(BOOL)arg1 ;
-(id)_jsonDictionaryForIssue:(id)arg0 ;
-(id)_jsonString;
-(id)_locStringForKey:(id)arg0 ;
-(id)generateReportType:(NSInteger)arg0 outputPath:(id)arg1 outputFilename:(id)arg2 error:(*id)arg3 ;
-(id)imageDataForIssue:(id)arg0 thumbnailOnly:(BOOL)arg1 ;
-(id)init;
-(id)reportHeaderForIssues:(id)arg0 ;
-(id)textDescriptionForIssues:(id)arg0 ;
-(void)_processScreenshotsForAXAuditResult:(id)arg0 completion:(id)arg1 ;
-(void)appendIssues:(id)arg0 ;
-(void)generateXCTestReportType:(NSInteger)arg0 forAuditResult:(id)arg1 completion:(id)arg2 ;


@end


#endif