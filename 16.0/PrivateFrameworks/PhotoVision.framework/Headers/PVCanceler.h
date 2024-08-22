// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVCANCELER_H
#define PVCANCELER_H


#import <Foundation/Foundation.h>


@interface PVCanceler : NSObject

@property (nonatomic) BOOL canceled; // ivar: _canceled
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock


+(id)cancelerWithUpdateBlock:(id)arg0 ;


@end


#endif