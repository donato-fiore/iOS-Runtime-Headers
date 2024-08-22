// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVCONTAINERCHECKSUMSYNCTASKGROUP_H
#define CALDAVCONTAINERCHECKSUMSYNCTASKGROUP_H

@class NSString, NSMutableDictionary, NSDictionary, CoreDAVItemParserMapping, NSArray;
@protocol CalDAVChecksumLocalDBInfoProvider;


#import "CalDAVContainerSyncTaskGroup.h"

@interface CalDAVContainerChecksumSyncTaskGroup : CalDAVContainerSyncTaskGroup {
    NSString *_unusedSyncToken;
    NSString *_unusedCTag;
    NSMutableDictionary *_serverURLsToChecksums;
    NSDictionary *_localURLsToChecksums;
}


@property (retain, nonatomic) CoreDAVItemParserMapping *bestServerChecksumVersion; // ivar: _bestServerChecksumVersion
@property (nonatomic) NSObject<CalDAVChecksumLocalDBInfoProvider> *delegate;
@property (readonly, nonatomic) BOOL mismatchDetected; // ivar: _mismatchDetected
@property (retain, nonatomic) NSArray *preferredChecksumVersions; // ivar: _preferredChecksumVersions


-(BOOL)_hadOutOfDateCollectionToken;
-(BOOL)shouldDownloadResource:(id)arg0 localETag:(id)arg1 serverETag:(id)arg2 ;
-(id)_calculatedCalendarHome;
-(id)copyAdditionalResourcePropertiesToFetch;
-(id)initWithFolderURL:(id)arg0 previousCTag:(id)arg1 previousSyncToken:(id)arg2 actions:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5 appSpecificCalendarItemClass:(Class)arg6 ;
-(void)_handleResponseToChecksumPropfind:(id)arg0 ;
-(void)_serverChecksumSupportPropfind;
-(void)deleteResourceURLs:(id)arg0 ;
-(void)receivedPropertiesToValues:(id)arg0 forURL:(id)arg1 ;
-(void)startTaskGroup;


@end


#endif