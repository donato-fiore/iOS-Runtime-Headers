// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRMODESELECTCLUSTERMODEOPTIONSTRUCT_H
#define MTRMODESELECTCLUSTERMODEOPTIONSTRUCT_H

@class NSString, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface MTRModeSelectClusterModeOptionStruct : NSObject

@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSNumber *mode; // ivar: _mode
@property (retain, nonatomic) NSArray *semanticTags; // ivar: _semanticTags


-(id)description;
-(id)init;


@end


#endif