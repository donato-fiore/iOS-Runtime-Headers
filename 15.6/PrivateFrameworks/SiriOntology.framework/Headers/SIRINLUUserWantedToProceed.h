// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUUSERWANTEDTOPROCEED_H
#define SIRINLUUSERWANTEDTOPROCEED_H

@class NSUUID;
@protocol SIRINLUUserDialogAct;

#import <Foundation/Foundation.h>

#import "USOSerializedGraph.h"

@interface SIRINLUUserWantedToProceed : NSObject <SIRINLUUserDialogAct>



@property (retain, nonatomic) USOSerializedGraph *reference; // ivar: _reference
@property (retain, nonatomic) NSUUID *taskId; // ivar: _taskId


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReference:(id)arg0 ;
-(id)initWithTaskId:(id)arg0 reference:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif