// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUICONCELLCONTENTMETRICS_H
#define HUICONCELLCONTENTMETRICS_H


#import <Foundation/Foundation.h>


@interface HUIconCellContentMetrics : NSObject

@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (nonatomic) CGSize iconSize; // ivar: _iconSize


+(id)compactMetrics;
+(id)defaultMetrics;


@end


#endif