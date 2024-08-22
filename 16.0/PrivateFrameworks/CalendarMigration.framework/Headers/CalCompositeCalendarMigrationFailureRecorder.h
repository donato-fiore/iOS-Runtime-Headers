// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALCOMPOSITECALENDARMIGRATIONFAILURERECORDER_H
#define CALCOMPOSITECALENDARMIGRATIONFAILURERECORDER_H

@class NSString, NSArray;
@protocol CalCalendarMigrationFailureRecorder;

#import <Foundation/Foundation.h>


@interface CalCompositeCalendarMigrationFailureRecorder : NSObject <CalCalendarMigrationFailureRecorder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *failureRecorders; // ivar: _failureRecorders
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFailureRecorders:(id)arg0 ;
-(void)recordMigrationFailure:(id)arg0 ;
-(void)reportRecordedFailures;


@end


#endif