// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNSUDDENTERMINATIONINHIBITOR_H
#define _CNSUDDENTERMINATIONINHIBITOR_H

@class NSProcessInfo;


#import "CNInhibitor.h"

@interface _CNSuddenTerminationInhibitor : CNInhibitor

@property (retain, nonatomic) NSProcessInfo *processInfo; // ivar: _processInfo


-(id)init;
-(id)initWithProcessInfo:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif