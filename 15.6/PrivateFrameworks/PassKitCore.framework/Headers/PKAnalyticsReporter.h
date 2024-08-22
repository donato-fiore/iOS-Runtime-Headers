// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKANALYTICSREPORTER_H
#define PKANALYTICSREPORTER_H

@class NSData, RTCReporting, RTCSecureHierarchyToken, NSString;

#import <Foundation/Foundation.h>


@interface PKAnalyticsReporter : NSObject {
    NSData *_archivedSessionToken;
    RTCReporting *_session;
    RTCSecureHierarchyToken *_sessionToken;
    os_unfair_lock_s _lockArchive;
    NSString *_subject;
}




+(id)archivedSessionTokenForSubject:(id)arg0 ;
+(id)reporterForSubject:(id)arg0 ;
+(id)subjectDictionary;
+(id)subjectSessionStateDateDictionary;
+(id)subjectToReportDashboardAnalyticsForAccount:(id)arg0 ;
+(id)subjectToReportDashboardAnalyticsForFeature:(NSUInteger)arg0 ;
+(id)subjectToReportDashboardAnalyticsForPass:(id)arg0 ;
+(void)beginSubjectReporting:(id)arg0 ;
+(void)beginSubjectReporting:(id)arg0 withArchivedParent:(id)arg1 ;
+(void)endSubjectReporting:(id)arg0 ;
+(void)reportDashboardEventIfNecessary:(id)arg0 forPass:(id)arg1 ;
+(void)sendSingularEvent:(id)arg0 ;
+(void)subject:(id)arg0 category:(NSInteger)arg1 sendEvent:(id)arg2 ;
+(void)subject:(id)arg0 sendEvent:(id)arg1 ;
+(void)subjects:(id)arg0 category:(NSInteger)arg1 sendEvent:(id)arg2 ;
+(void)subjects:(id)arg0 sendEvent:(id)arg1 ;
-(id)archivedSessionToken;
-(id)initWithArchivedParent:(id)arg0 subject:(id)arg1 ;
-(id)initWithParent:(id)arg0 subject:(id)arg1 ;
-(id)initWithParentToken:(id)arg0 subject:(id)arg1 ;
-(id)initWithSubject:(id)arg0 ;
-(void)sendEvent:(id)arg0 ;
-(void)sendEvent:(id)arg0 withCategory:(NSInteger)arg1 ;


@end


#endif