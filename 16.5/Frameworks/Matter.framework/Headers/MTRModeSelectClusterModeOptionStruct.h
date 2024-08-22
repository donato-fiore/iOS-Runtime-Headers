// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRMODESELECTCLUSTERMODEOPTIONSTRUCT_H
#define MTRMODESELECTCLUSTERMODEOPTIONSTRUCT_H

@class NSString, NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRModeSelectClusterModeOptionStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSNumber *mode; // ivar: _mode
@property (copy, nonatomic) NSArray *semanticTags; // ivar: _semanticTags


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif