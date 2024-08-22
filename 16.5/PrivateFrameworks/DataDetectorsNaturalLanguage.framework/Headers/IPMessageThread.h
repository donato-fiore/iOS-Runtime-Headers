// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPMESSAGETHREAD_H
#define IPMESSAGETHREAD_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface IPMessageThread : NSObject {
    NSMutableArray *_threadRoots;
    NSMutableArray *_allUnits;
    NSArray *_allUnitsSorted;
}




-(id)orderedMessageUnits;
-(id)threads;
-(void)appendUnit:(id)arg0 inResponseToUnit:(id)arg1 ;


@end


#endif