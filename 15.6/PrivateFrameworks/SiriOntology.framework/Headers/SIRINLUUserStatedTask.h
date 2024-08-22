// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUUSERSTATEDTASK_H
#define SIRINLUUSERSTATEDTASK_H

@protocol SIRINLUUserDialogAct;

#import <Foundation/Foundation.h>

#import "USOSerializedGraph.h"

@interface SIRINLUUserStatedTask : NSObject <SIRINLUUserDialogAct>



@property (retain, nonatomic) USOSerializedGraph *goal; // ivar: _goal
@property (retain, nonatomic) USOSerializedGraph *task; // ivar: _task


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGoal:(id)arg0 ;
-(id)initWithTask:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif