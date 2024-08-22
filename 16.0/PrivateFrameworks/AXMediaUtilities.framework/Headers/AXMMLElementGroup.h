// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMMLELEMENTGROUP_H
#define AXMMLELEMENTGROUP_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "AXMVisionFeature.h"

@interface AXMMLElementGroup : NSObject

@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (retain, nonatomic) AXMVisionFeature *feature; // ivar: _feature
@property (nonatomic) CGRect frame; // ivar: _frame
@property (nonatomic) BOOL includeChildren; // ivar: _includeChildren
@property (retain, nonatomic) NSMutableArray *subfeatures; // ivar: _subfeatures
@property (nonatomic) BOOL topLevel; // ivar: _topLevel


-(id)childFeatures;
-(id)description;
-(id)init;
-(id)textLabel;


@end


#endif