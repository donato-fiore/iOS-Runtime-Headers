// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKCHANGEENTRY_H
#define TSKCHANGEENTRY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSKChangeEntry : NSObject

@property (readonly, nonatomic) id *changeSource; // ivar: _changeSource
@property (readonly, nonatomic) NSMutableArray *changes; // ivar: _changes


-(id)initWithChangeSource:(id)arg0 changes:(id)arg1 ;


@end


#endif