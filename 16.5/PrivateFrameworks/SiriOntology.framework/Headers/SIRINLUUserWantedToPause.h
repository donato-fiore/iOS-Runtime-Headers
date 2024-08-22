// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUUSERWANTEDTOPAUSE_H
#define SIRINLUUSERWANTEDTOPAUSE_H

@class NSUUID;
@protocol SIRINLUUserDialogAct;

#import <Foundation/Foundation.h>

#import "USOSerializedGraph.h"

@interface SIRINLUUserWantedToPause : NSObject <SIRINLUUserDialogAct>



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