// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITABLEVIEWDELETEANIMATIONSUPPORT_H
#define _UITABLEVIEWDELETEANIMATIONSUPPORT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _UITableViewDeleteAnimationSupport : NSObject {
    NSMutableArray *_cellsToDeleteAfterAnimation;
    int _deleteCount;
    BOOL _enabledStateBeforeDeleteAnimation;
}






@end


#endif