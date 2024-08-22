// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIDYNAMICIMPRESSIONMETRICSIDENTIFIER_H
#define AMSUIDYNAMICIMPRESSIONMETRICSIDENTIFIER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSUIDynamicImpressionMetricsIdentifier : NSObject

@property (retain, nonatomic) NSString *element; // ivar: _element
@property (nonatomic) NSInteger index; // ivar: _index
@property (retain, nonatomic) NSString *parent; // ivar: _parent


-(id)initWithParent:(id)arg0 element:(id)arg1 index:(NSInteger)arg2 ;


@end


#endif