// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDEFAULTCALENDARMIGRATIONFAILURERECORDER_H
#define CALDEFAULTCALENDARMIGRATIONFAILURERECORDER_H

@class NSString;
@protocol CalCalendarMigrationFailureRecorder;

#import <Foundation/Foundation.h>


@interface CalDefaultCalendarMigrationFailureRecorder : NSObject <CalCalendarMigrationFailureRecorder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(void)recordMigrationFailure:(id)arg0 ;


@end


#endif