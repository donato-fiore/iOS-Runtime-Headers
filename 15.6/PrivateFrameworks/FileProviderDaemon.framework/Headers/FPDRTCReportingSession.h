// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDRTCREPORTINGSESSION_H
#define FPDRTCREPORTINGSESSION_H

@class NSString;
@protocol FPDRTCReportingObserver;

#import <Foundation/Foundation.h>

#import "FPDRTCReportingSessionManager.h"

@interface FPDRTCReportingSession : NSObject {
    NSString *_providerID;
    NSString *_providerVersion;
    FPDRTCReportingSessionManager *_backingManager;
    id<FPDRTCReportingObserver> *_observer;
}




-(BOOL)flushMessagesSynchronouslyWithError:(*id)arg0 ;
-(id)description;
-(id)initWithProviderID:(id)arg0 version:(id)arg1 manager:(id)arg2 ;
-(id)truncateProviderVersion:(id)arg0 ;
-(void)flushMessagesWithCompletion:(id)arg0 ;
-(void)postReportWithCategory:(NSUInteger)arg0 type:(NSUInteger)arg1 payload:(id)arg2 error:(id)arg3 ;
-(void)setObserver:(id)arg0 ;


@end


#endif