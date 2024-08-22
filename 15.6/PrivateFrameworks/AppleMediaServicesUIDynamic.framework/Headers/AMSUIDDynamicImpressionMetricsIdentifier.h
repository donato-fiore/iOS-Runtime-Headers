// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIDDYNAMICIMPRESSIONMETRICSIDENTIFIER_H
#define AMSUIDDYNAMICIMPRESSIONMETRICSIDENTIFIER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSUIDDynamicImpressionMetricsIdentifier : NSObject {
    ? element;
    ? parent;
}


@property (nonatomic, copy) NSString *element;
@property (nonatomic) NSInteger index; // ivar: index
@property (nonatomic, copy) NSString *parent;


-(id)init;
-(id)initWithParent:(id)arg0 element:(id)arg1 index:(NSInteger)arg2 ;


@end


#endif