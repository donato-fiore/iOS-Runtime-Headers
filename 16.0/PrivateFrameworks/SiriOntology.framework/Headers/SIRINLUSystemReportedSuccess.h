// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUSYSTEMREPORTEDSUCCESS_H
#define SIRINLUSYSTEMREPORTEDSUCCESS_H

@class NSString, NSUUID;
@protocol SIRINLUSystemDialogAct;

#import <Foundation/Foundation.h>

#import "USOSerializedGraph.h"

@interface SIRINLUSystemReportedSuccess : NSObject <SIRINLUSystemDialogAct>



@property (retain, nonatomic) NSString *renderedText; // ivar: renderedText
@property (retain, nonatomic) USOSerializedGraph *task; // ivar: _task
@property (retain, nonatomic) NSUUID *taskId; // ivar: _taskId


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTaskId:(id)arg0 task:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif