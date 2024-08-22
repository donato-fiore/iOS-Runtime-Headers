// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSTATEDUMPENTRY_H
#define HFSTATEDUMPENTRY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HFStateDumpBuilderContext.h"

@interface HFStateDumpEntry : NSObject

@property (copy, nonatomic) HFStateDumpBuilderContext *context; // ivar: _context
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) id *object; // ivar: _object
@property (nonatomic) NSUInteger options; // ivar: _options




@end


#endif