// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RSSTATEINFO_H
#define RSSTATEINFO_H


#import <Foundation/Foundation.h>


@interface RSStateInfo : NSObject

@property (nonatomic) NSInteger actionRevision; // ivar: _actionRevision
@property (nonatomic) NSUInteger stateType; // ivar: _stateType


-(id)initWithType:(NSUInteger)arg0 revision:(NSInteger)arg1 ;


@end


#endif