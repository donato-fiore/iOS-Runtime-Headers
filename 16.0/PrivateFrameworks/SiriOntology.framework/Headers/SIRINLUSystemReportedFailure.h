// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUSYSTEMREPORTEDFAILURE_H
#define SIRINLUSYSTEMREPORTEDFAILURE_H

@class NSString, NSUUID;
@protocol SIRINLUSystemDialogAct;

#import <Foundation/Foundation.h>

#import "USOSerializedGraph.h"

@interface SIRINLUSystemReportedFailure : NSObject <SIRINLUSystemDialogAct>



@property (retain, nonatomic) USOSerializedGraph *reason; // ivar: _reason
@property (retain, nonatomic) NSString *renderedText; // ivar: renderedText
@property (retain, nonatomic) USOSerializedGraph *task; // ivar: _task
@property (retain, nonatomic) NSUUID *taskId; // ivar: _taskId


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTaskId:(id)arg0 reason:(id)arg1 task:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif