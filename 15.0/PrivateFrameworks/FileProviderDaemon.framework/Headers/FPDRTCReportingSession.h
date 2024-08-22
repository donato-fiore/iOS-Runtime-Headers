// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDRTCREPORTINGSESSION_H
#define FPDRTCREPORTINGSESSION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "FPDRTCReportingSessionManager.h"

@interface FPDRTCReportingSession : NSObject {
    NSString *_providerID;
    FPDRTCReportingSessionManager *_backingManager;
}




-(id)description;
-(id)initWithProviderID:(id)arg0 manager:(id)arg1 ;
-(void)dealloc;
-(void)postReportWithCategory:(NSUInteger)arg0 type:(NSUInteger)arg1 payload:(id)arg2 completion:(id)arg3 ;


@end


#endif