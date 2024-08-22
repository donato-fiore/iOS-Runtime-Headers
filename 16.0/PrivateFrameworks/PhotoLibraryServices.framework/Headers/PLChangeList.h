// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCHANGELIST_H
#define PLCHANGELIST_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface PLChangeList : NSObject

@property (retain, nonatomic) NSMutableSet *deleted; // ivar: _deleted
@property (retain, nonatomic) NSMutableSet *inserted; // ivar: _inserted
@property (retain, nonatomic) NSMutableSet *updated; // ivar: _updated


-(void)cleanupState;


@end


#endif