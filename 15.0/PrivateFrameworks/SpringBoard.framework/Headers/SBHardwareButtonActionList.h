// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHARDWAREBUTTONACTIONLIST_H
#define SBHARDWAREBUTTONACTIONLIST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SBHardwareButtonActionList : NSObject {
    NSInteger _performQueueNestCount;
}


@property (retain, nonatomic) NSMutableArray *actionBlocks; // ivar: _actionBlocks
@property (nonatomic, getter=isButtonDown) BOOL buttonDown; // ivar: _buttonDown


-(void)performQueuedButtonUpActions;
-(void)scheduleButtonUpActionBlock:(id)arg0 ;


@end


#endif