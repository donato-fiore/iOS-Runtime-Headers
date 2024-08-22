// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCLIENTCONTEXT_H
#define HMCLIENTCONTEXT_H

@class NSString;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HMClientContext : NSObject <NSCopying, NSMutableCopying>



@property (retain, nonatomic) NSString *metricIdentifier; // ivar: _metricIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMetricIdentifier:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif