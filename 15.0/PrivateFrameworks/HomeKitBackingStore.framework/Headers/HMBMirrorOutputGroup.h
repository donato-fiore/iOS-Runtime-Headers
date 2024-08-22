// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBMIRROROUTPUTGROUP_H
#define HMBMIRROROUTPUTGROUP_H

@class HMFObject;


#import "HMBProcessingOptions.h"

@interface HMBMirrorOutputGroup : HMFObject

@property (readonly, nonatomic) NSUInteger blockRow; // ivar: _blockRow
@property (readonly, nonatomic) HMBProcessingOptions *options; // ivar: _options


-(id)description;
-(id)initWithBlockRow:(NSUInteger)arg0 options:(id)arg1 ;


@end


#endif