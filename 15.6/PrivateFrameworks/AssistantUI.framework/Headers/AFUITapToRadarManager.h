// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFUITAPTORADARMANAGER_H
#define AFUITAPTORADARMANAGER_H

@class NSMutableArray, NSArray, NSString, NSMutableDictionary;
@protocol AFUIBugReporting, AFUIBugReportingDelegate;

#import <Foundation/Foundation.h>


@interface AFUITapToRadarManager : NSObject <AFUIBugReporting>



@property (retain, nonatomic, getter=_attachmentPaths) NSMutableArray *attachmentPaths; // ivar: _attachmentPaths
@property (copy, nonatomic, getter=_contextCollectorsInfo) NSArray *contextCollectorsInfo; // ivar: _contextCollectorsInfo
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AFUIBugReportingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, getter=_hostname) NSString *hostname; // ivar: _hostname
@property (copy, nonatomic, getter=_lastUserText) NSString *lastUserText; // ivar: _lastUserText
@property (copy, nonatomic, getter=_siriLanguage) NSString *siriLanguage; // ivar: _siriLanguage
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_tapToRadarParameters) NSMutableDictionary *tapToRadarParameters; // ivar: _tapToRadarParameters


-(BOOL)canReportBugs;
-(NSUInteger)maximumAttachmentSize;
-(id)init;
-(void)_setDefaultParameterValues;
-(void)attachData:(id)arg0 name:(id)arg1 mimeType:(id)arg2 ;
-(void)attachFileAtPath:(id)arg0 image:(BOOL)arg1 ;
-(void)composeBugReport;
-(void)setComponentName:(id)arg0 componentVersion:(id)arg1 componentID:(id)arg2 ;
-(void)setIncludeSysdiagnosesFromDevices:(id)arg0 ;
-(void)setKeywordIdentifiers:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif